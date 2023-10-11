#include<iostream>
#include<cmath>
#include<iomanip>
struct ThiSinh
{
    std::string name;
    std::string birthday;
    float mark1,mark2,mark3;
    float total;
};
void nhap(ThiSinh &a)
{
    std::getline(std::cin,a.name);
    std::getline(std::cin,a.birthday);
    std::cin>>a.mark1>>a.mark2>>a.mark3;
    a.total = a.mark1 + a.mark2 + a.mark3;
}
void in(ThiSinh a)
{
    std::cout<<std::fixed<<std::setprecision(1)<< a.name <<" "<<a.birthday<<" "<<a.total;
}
int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
    return 0;
}