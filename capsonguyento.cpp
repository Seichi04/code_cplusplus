#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
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
        for(long long i=2;i<=n/2;i++)
        {
            if(check(i) && check(n-i))
            {
                std::cout<<i<<" "<<n-i<<"\n";
                break;
            }
        }
    }
}
