#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
        }

        std::sort(a.begin(),a.end());

        for(auto i:a)
        {
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
}