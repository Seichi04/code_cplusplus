#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<iomanip>
struct MatHang
{
    int id;
    std::string name,group;
    double bprice,sprice;
    double interest;
};
bool compare(MatHang a,MatHang b)
{
    return a.interest > b.interest;
}
int main()
{
    int n;
    std::cin>>n;
    std::vector<MatHang> a(n);

    for(int i=0;i<n;i++)
    {
        std::cin.ignore();
        std::getline(std::cin,a[i].name);
        std::getline(std::cin,a[i].group);
        std::cin>>a[i].bprice>>a[i].sprice;
        a[i].interest = a[i].sprice - a[i].bprice;
        a[i].id= i+1;
    }
    std::sort(a.begin(),a.end(),compare);

    for(int i=0;i<n;i++)
    {
        std::cout<<a[i].id<<" "<<a[i].name<<" "<<a[i].group<<" "<<std::fixed<<std::setprecision(2)<<a[i].interest<<"\n";
    }

}