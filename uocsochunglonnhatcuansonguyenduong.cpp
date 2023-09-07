#include<iostream>
#include<string>

long long UCLN(long long a,long long b)
{
    if(b==0)
        return a;
    return UCLN(b,a%b);
}

long long BCNN(long long a,long long b)
{
    return a*b/UCLN(a,b);
}

int main()
{
    int t;
    std::cin>>t;

    while(t--)
    {

        long long n;
        std::cin>>n;
        long long bc=1;
        for(long long i=1;i<=n;i++)
        {
            bc=BCNN(bc,i);
        }

        std::cout<<bc<<"\n";
        
    }
}