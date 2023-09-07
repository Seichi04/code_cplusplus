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

long long UCLN(long long a,long long b)
{
    if(b==0) return a;
    else return UCLN(b,a%b);
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long x;
        std::cin>>x;
        long long count=0;
        for(long long i=1;i<x;i++)
        {
            if(UCLN(i,x)==1) count++;
        }
        
        if(check(count)) std::cout<<"1\n";
        else std::cout<<"0\n";

    }
}
