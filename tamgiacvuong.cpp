#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>
#include<cmath>

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
            a[i]*=a[i];
        }
        for(long long i=0;i<n-1;i++)
        {
            for(long long j=i+1;j<n;j++)
            {
                if(std::binary_search(a.begin(),a.end(),a[i]+a[j]))
                {
                    std::cout<<"YES\n";
                    goto label;
                }
            }
        }
        std::cout<<"NO\n";
        
        label: continue;

    }
}