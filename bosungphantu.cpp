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
        long long Max,Min;
        std::map<long long,long long> fre;
        for(long long i=0;i<n;i++)
        {
            long long temp;
            std::cin>>temp;
            fre[temp]++;
            if(i==0)
            {
                Max= temp;
                Min= temp;
            }
            else
            {
                Max = std::max(Max,temp);
                Min = std::min(Min,temp);
            }
        }
        long long count=0;
        for(long long i=Min;i<=Max;i++)
        {
            if(fre[i]==0) count++;
        }
        std::cout<<count<<"\n";

    }
}