#include<iostream>
#include<vector>
#include<algorithm>
struct SinhVien
{
    int id;
    std::string msv,name,cla,email,company;
};
bool compare1(SinhVien a,SinhVien b)
{
    return a.name < b.name;
}
bool compare2(SinhVien a,SinhVien b)
{
    return a.msv < b.msv;
}
int main()
{
    int n;
    std::cin>>n;
    std::cin.ignore();
    std::vector<SinhVien> a(n);
    for(int i=0;i<n;i++)
    {
        std::getline(std::cin,a[i].msv);
        std::getline(std::cin,a[i].name);
        std::getline(std::cin,a[i].cla);
        std::getline(std::cin,a[i].email);
        std::getline(std::cin,a[i].company);
        a[i].id=i+1;
    }
    int q;
    std::cin>>q;
    std::cin.ignore();
    while(q--)
    {
        std::string temp;
        std::getline(std::cin,temp);
        std::vector<SinhVien> x;

        for(int i=0;i<n;i++)
        {
            if(a[i].company == temp)
            {
                x.push_back(a[i]);
            }
        }
        std::sort(x.begin(),x.end(),compare2);

        for(auto i:x)
        {
            std::cout<<i.id<<" "<<i.msv<<" "<<i.name<<" "<<i.cla<<" "<<i.email<<" "<<i.company<<"\n";
        }

    }
}