#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
using namespace std;
struct NhanVien
{
    string mnv,name,gender,birth,adress,ms,signDay;
};
void chuanhoa(string &s)
{
    if(s[1]=='/')
        s.insert(s.begin(),'0');
    if(s[4]=='/')
        s.insert(s.begin()+3,'0');
}
bool flag= false;
int ind=1;
void nhap(NhanVien &a)
{
    if(!flag)
    {
        cin.ignore();
        flag=true;
    }
    string temp=std::to_string(ind++);
    temp= string(5-temp.size(),'0') +temp;
    a.mnv= temp;
    getline(cin,a.name);
    getline(cin,a.gender);
    getline(cin,a.birth);
    chuanhoa(a.birth);
    getline(cin,a.adress);
    getline(cin,a.ms);
    getline(cin,a.signDay);
    chuanhoa(a.signDay);
}
void inds(NhanVien ds[],int N)
{

    for(int i=1;i<=N;i++)
    {
        cout<<ds[i-1].mnv<<" "<<ds[i-1].name<<" "<<ds[i-1].gender<<" "<<ds[i-1].birth<<" "<<ds[i-1].adress<<" "<<ds[i-1].ms<<" "<<ds[i-1].signDay<<"\n";
    }
}
bool compare(NhanVien a,NhanVien b)
{
    std::string time_a,time_b;
    time_a.assign(a.birth.begin()+6,a.birth.end());
    time_b.assign(b.birth.begin()+6,b.birth.end());
    if(time_a != time_b)
        return time_a < time_b;
    else
    {
        time_a.assign(a.birth.begin(),a.birth.begin()+2);
        time_b.assign(b.birth.begin(),b.birth.begin()+2);
        if(time_a != time_b)
            return time_a < time_b;
        else
        {
            time_a.assign(a.birth.begin()+3,a.birth.begin()+5);
            time_b.assign(b.birth.begin()+3,b.birth.begin()+5);
            return time_a < time_b;
        }
    }

}
void sapxep(NhanVien ds[],int N)
{
    sort(ds,ds+N,compare);
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}