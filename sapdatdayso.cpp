#include<iostream>
#include<vector>
#include<map>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<long long> a(n,0);
        std::map<long long,long long> fre;
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
            fre[a[i]]++;
        }
        for(long long i=0;i<n;i++)
        {
            if(fre[i]!=0) std::cout<<i<<" ";
            else
            {
                std::cout<<"-1 ";
            }
        }
        std::cout<<"\n";

    }
}