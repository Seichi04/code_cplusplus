#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,k;
        std::cin>>k>>n;
        std::vector<long long> a(n*k,0);
        for(long long i=0;i<n*k;i++)
        {
            std::cin>>a[i];
        }
        std::sort(a.begin(),a.end());
        for(long long i:a)
        {
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
}