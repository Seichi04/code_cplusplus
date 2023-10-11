#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<iomanip>
using namespace std;
struct SinhVien
{
    string msv;
    string name;
    string cla;
    double mark1,mark2,mark3;
};
void nhap(SinhVien &a)
{
    
    cin>>a.msv;
    cin.ignore();
    getline(cin,a.name);
    cin>>a.cla;
    cin>>a.mark1>>a.mark2>>a.mark3;
}
bool compare(SinhVien a,SinhVien b)
{
    return a.msv < b.msv;
}
void sap_xep(SinhVien *ds,int n)
{
    sort(ds,ds+n,compare);
}
void in_ds(SinhVien *ds,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<i+1<<" "<<ds[i].msv<<" "<<ds[i].name<<" "<<ds[i].cla<<" "<<fixed<<setprecision(1)<<ds[i].mark1<<" "<<ds[i].mark2<<" "<<ds[i].mark3<<"\n";
    }
}
int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}