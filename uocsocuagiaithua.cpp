#include<iostream>
#include<cmath>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,p;
        std::cin>>n>>p;
        long long count=0;
        for(long long i=p;i<=n;i+=p)
        {
            long long temp=i;
            while(temp%p==0)
            {
                count++;
                temp/=p;
            }
        }
        std::cout<<count<<"\n";
    }
}