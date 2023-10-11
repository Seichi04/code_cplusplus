#include<iostream>
#include<algorithm>
#include<vector>
struct tim
{
    int hour,minute,second;
};
bool compare(tim a,tim b)
{
    if(a.hour != b.hour)
        return a.hour < b.hour;
    else
    {
        if(a.minute != b.minute)
            return a.minute < b.minute;
        else
            return a.second < b.second;
    }
}
int main()
{
    int n;
    std::cin>>n;
    std::vector<tim> a(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i].hour>>a[i].minute>>a[i].second;
    }
    std::sort(a.begin(),a.end(),compare);
    for(int i=0;i<n;i++)
    {
        std::cout<<a[i].hour<<" "<<a[i].minute<<" "<<a[i].second<<"\n";
    }
}