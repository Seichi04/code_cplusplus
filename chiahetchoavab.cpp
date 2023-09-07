#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long m,n,a,b;
        std::cin>>m>>n>>a>>b;
        long long count=0;
        for(long long i=m;i<=n;i++)
        {
            if(i%a==0 || i%b==0)
            {
                count++;
            }
        }
        std::cout<<count<<"\n";
    }
}
