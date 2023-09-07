#include<iostream>
#include<cmath>
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

bool checktanggiam(long long n)
{
    int temp=n%10;
    n/=10;
    if(n%10>temp)
    {
        while(n!=0)
        {
            
            if((n%10)<=temp) return false;
            temp=n%10;
            n/=10;
        }
    }
    else if(n%10 < temp)
    {
        while(n!=0)
        {
            
            if((n%10) >= temp) return false;
            temp=n%10;
            n/=10;
        }
    }
    else    return false;
    return true;
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        long long a=pow(10,n-1);
        long long b=pow(10,n);
        long long count=0;
        for(long long i=a;i<b;i++)
        {
            if(checktanggiam(i) && check(i))
            {
                count++;
            }
        }
        std::cout<<count<<"\n";
    }
}