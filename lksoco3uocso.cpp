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
        long long n;
        std::cin>>n;
        for(int i=2;i*i<=n;i++)
        {
            if(check(i))
            {
                std::cout<<i*i<<" ";
            }
            
        }
        std::cout<<"\n";
    }
}