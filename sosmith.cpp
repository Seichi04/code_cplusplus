#include<iostream>
#include<cmath>
bool check(long long n)
{
    if(n<=1) return false;
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

long long tach(long long n)
{
    long long sum=0;
    while(n!=0)
    {
        sum= sum+ n%10;
        n/=10;
    }
    return sum;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        if(check(n))
        {
            std::cout<<"NO\n";
            continue;
        }
        long long sum=0;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(check(n/i) && i!=n/i) sum+= tach(n/i);
                
                if(check(i))
                {
                    long long count=0;
                    long long temp=n;
                    while(temp%i==0)
                    {
                        count++;
                        temp/=i;
                    }
                    sum= sum + count * tach(i);
                }
            }
        }
        if(tach(n) == sum) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
}