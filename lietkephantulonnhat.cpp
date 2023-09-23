#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
bool compare(const long long a,const long long b)
{
    return a>b;
}
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
        std::sort(a.begin(),a.end(),compare);
        for(int i=0;i<k;i++)
        {
            std::cout<<a[i]<<" ";
        }
        std::cout<<"\n";
    }
}