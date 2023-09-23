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
        long long n;
        std::cin>>n;
        std::map<long long,long long> fre;
        for(long long i=0;i<n-1;i++)
        {
            long long temp;
            std::cin>>temp;
            fre[temp]++;
        }
        for(long long i=1;i<=n;i++)
        {
            if(fre[i]==0)
            {
                std::cout<<i<<"\n";
                break;
            }
        }
    }
}