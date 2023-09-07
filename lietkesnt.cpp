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
    long long n,m;
    std::cin>>n>>m;
    if(n>m)
    {
        long long temp=n;
        n=m;
        m=temp;
    }
    for(long long i=n;i<=m;i++)
    {
        if(check(i))
        {
            std::cout<<i<<" ";
        }
    }
}