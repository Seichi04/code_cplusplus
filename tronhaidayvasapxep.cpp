#include<vector>
#include<iostream>
#include<algorithm>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,m;
        std::cin>>n>>m;
        std::vector<long long> a(n,0);
        std::vector<long long> b(m,0);
        for(long long i=0;i<n;i++) std::cin>>a[i];
        for(long long j=0;j<m;j++) std::cin>>b[j];
        std::sort(a.begin(),a.end());
        std::sort(b.begin(),b.end());

        long long i=0,j=0;
        while(i<n || j<m)
        {
            if(i<n && j<m)
            {
                if(a[i]<b[j])
                {
                    std::cout<<a[i++]<<" ";
                }
                else
                {
                    std::cout<<b[j++]<<" ";
                }
            }
            if(i<n && j>=m)
            {
                std::cout<<a[i++]<<" ";
            }
            if(i>=n && j<m)
            {
                std::cout<<b[j++]<<" ";
            }
        }
        std::cout<<"\n";
    }
}