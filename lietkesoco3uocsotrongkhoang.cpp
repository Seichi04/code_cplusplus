#include<iostream>
#include<cmath>
bool check(long long n)
{
    if(n<=1) return false;
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,m;
        std::cin>>n>>m;
        long long count=0;
        for(int i=ceil(sqrt(n));i<=sqrt(m);i++)
        {
            if(check(i))
            {
                count++;
            }
            
        }
        std::cout<<count<<"\n";
    }
}