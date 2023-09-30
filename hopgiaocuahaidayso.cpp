#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,m;
        std::cin>>n>>m;

        std::vector<long long> a(n,0),b(m,0);
        std::map<long long,long long> fre;
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
            fre[a[i]]++;
        }

        for(long long i=0;i<m;i++)
        {
            std::cin>>b[i];
            fre[b[i]]++;
        }

        for(auto i:fre)
        {
            std::cout<<i.first<<" ";
        }
        std::cout<<'\n';
        for(auto i:fre)
        {
            if(i.second==2) std::cout<<i.first<<" ";
        }
        std::cout<<"\n";
    }

}