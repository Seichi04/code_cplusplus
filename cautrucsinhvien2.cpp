#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
struct SinhVien
{
    std::string MSV= "N20DCCN001";
    std::string name,cla,birth;
    float gpa;
};
void nhapThongTinSV(SinhVien &a)
{
    std::getline(std::cin,a.name);
    std::cin>>a.cla>>a.birth;
    std::cin>>a.gpa;
}
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
void inThongTinSV(SinhVien a)
{
    std::cout<<a.MSV<<" "<<a.name<<" "<<a.cla<<" "<<chuanhoa(a.birth)<<" "<<std::fixed<<std::setprecision(2)<<a.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
    return 0;
}