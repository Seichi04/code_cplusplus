#include<iostream>
#include<iomanip>

struct NhanVien
{
    std::string MNV,name,gender,birth,adress,ms,signDay;
};
std::string chuanhoa(std::string s)
{
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='/')
        {
            if(i==1)
            {
                s.insert(s.begin(),'0');
                i++;
            }
            if(i==4)
            {
                s.insert(s.begin()+3,'0');
                i++;
            }
            
        }
    }
    return s;
}
void nhap(NhanVien &a)
{
    a.MNV= "00001";
    std::getline(std::cin,a.name);
    std::getline(std::cin,a.gender);
    std::getline(std::cin,a.birth);
    a.birth = chuanhoa(a.birth);
    std::getline(std::cin,a.adress);
    std::getline(std::cin,a.ms);
    std::getline(std::cin,a.signDay);
    a.signDay = chuanhoa(a.signDay);
}
void in(NhanVien a)
{
    std::cout<<a.MNV<<" "<<a.name<<" "<<a.gender<<" "<<a.birth<<" "<<a.adress<<" "<<a.ms<<" "<<a.signDay;
}
int main(){
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}