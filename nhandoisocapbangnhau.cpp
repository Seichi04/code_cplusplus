#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

bool compare(const std::pair<long long,long long> a,const std::pair<long long,long long> b)
{
    if(a.first!=0 && b.first!=0)
    {
        return a.second < b.second;
    }
    else
    {
        return a.first > b.first;
    }
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<std::pair<long long,long long>> a(n,{0,0});

        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i].first;
            a[i].second=i;
            if(i!=0)
            {
                if(a[i].first==a[i-1].first)
                {
                    a[i-1].first*=2;
                    a[i].first=0;
                }
            }
        }

        std::sort(a.begin(),a.end(),compare);

        for(auto i:a)
        {
            std::cout<<i.first<<" ";
        }
        std::cout<<"\n";


    }
}