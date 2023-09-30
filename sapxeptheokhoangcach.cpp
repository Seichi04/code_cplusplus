#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
long long x;


bool compare(const std::pair<long long,long long> a,const std::pair<long long,long long> b)
{
    if(abs(x-a.first) != abs(x-b.first))
    {
        return abs(x-a.first) < abs(x-b.first);
    }
    else
    {
        return a.second < b.second;
    }
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n>>x;
        std::vector<std::pair<long long,long long>> a(n,{0,0});
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i].first;
            a[i].second = i;
        }

        std::sort(a.begin(),a.end(),compare);
        for(auto i:a)
        {
            std::cout<<i.first<<" ";
        }
        std::cout<<"\n";
    }
}