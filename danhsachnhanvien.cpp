#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
struct NhanVien
{
    string name,gender,birth,adress,ms,signDay;
};
bool flag= false;
void nhap(NhanVien &a)
{
    if(!flag)
    {
        cin.ignore();
        flag=true;
    }

    getline(cin,a.name);
    getline(cin,a.gender);
    getline(cin,a.birth);
    getline(cin,a.adress);
    getline(cin,a.ms);
    getline(cin,a.signDay);
}
void inds(NhanVien ds[],int N)
{

    for(int i=1;i<=N;i++)
    {
        string temp=std::to_string(i);
        temp= string(5-temp.size(),'0') +temp;
        cout<<temp<<" "<<ds[i-1].name<<" "<<ds[i-1].gender<<" "<<ds[i-1].birth<<" "<<ds[i-1].adress<<" "<<ds[i-1].ms<<" "<<ds[i-1].signDay<<"\n";
    }
}
int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}