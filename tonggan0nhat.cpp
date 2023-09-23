#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<cmath>
bool compare(const long long a,const long long b)
{
    return abs(a) < abs(b);
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<long long> a(n,0);
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
        }

        long long ans=a[0]+a[1];
        for(long long i=0;i<n-1;i++)
        {
            for(long long j=i+1;j<n;j++)
            {
                if(abs(a[i]+a[j]) < abs(ans))
                {
                    ans= a[i]+a[j];
                }
            }
        }
        std::cout<<ans<<"\n";

    }
}