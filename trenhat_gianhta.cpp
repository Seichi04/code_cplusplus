#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
struct per
{
    std::string name;
    std::string birth;
};
bool compare(per a,per b)
{
    std::string time_a,time_b;
    time_a.assign(a.birth.begin()+6,a.birth.end());
    time_b.assign(b.birth.begin()+6,b.birth.end());
    if(time_a != time_b)
        return time_a < time_b;
    else
    {
        time_a.assign(a.birth.begin()+3,a.birth.begin()+5);
        time_b.assign(b.birth.begin()+3,b.birth.begin()+5);
        if(time_a != time_b)
            return time_a < time_b;
        else
        {
            time_a.assign(a.birth.begin(),a.birth.begin()+2);
            time_b.assign(b.birth.begin(),b.birth.begin()+2);
            return time_a < time_b;
        }
    }
}
int main()
{
    int n;
    std::cin>>n;
    std::vector<per> a(n);
    for(int i=0;i<n;i++) 
    {
        std::cin>>a[i].name>>a[i].birth;
    }
    std::sort(a.begin(),a.end(),compare);

    std::cout<<a.back().name<<"\n"<<a.front().name;
}