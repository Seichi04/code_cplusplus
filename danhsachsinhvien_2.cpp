#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>
#include<iomanip>
using namespace std;
struct SinhVien
{
    string MSV= "B20DCCN0";
    string name,cla,birth;
    float gpa;
};
void chuan_hoa_ngay_thang(string &s)
{
    if(s[1]=='/')
        s.insert(s.begin(),'0');
    if(s[4]=='/')
        s.insert(s.begin()+3,'0');
}
void chuan_hoa_ten(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        if(i==0 || s[i-1]==' ')
            s[i]= toupper(s[i]);
        else
            s[i]= tolower(s[i]);
    }
}
void nhap(SinhVien ds[],int N)
{
    for(int i=0;i<N;i++)
    {
        string temp=to_string(i+1);
        if((i+1) < 10)
            ds[i].MSV= ds[i].MSV +"0"+ temp;
        else
            ds[i].MSV= ds[i].MSV + temp;
        
        cin.ignore();
        getline(cin,ds[i].name);
        chuan_hoa_ten(ds[i].name);
        cin>>ds[i].cla;
        cin>>ds[i].birth;
        chuan_hoa_ngay_thang(ds[i].birth);
        cin>>ds[i].gpa;
    }
}
void in(SinhVien ds[],int N)
{
    for(int i=0;i<N;i++)
    {
        cout<<ds[i].MSV<<" "<<ds[i].name<<" "<<ds[i].cla<<" "<<ds[i].birth<<" "<<std::fixed<<std::setprecision(2)<<ds[i].gpa<<"\n";
    }
}
int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}