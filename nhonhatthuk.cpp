#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,k;
        std::cin>>n>>k;
        std::vector<long long> a(n,0);
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        std::sort(a.begin(),a.end());
        std::cout<<a[k-1]<<"\n";
    }
}