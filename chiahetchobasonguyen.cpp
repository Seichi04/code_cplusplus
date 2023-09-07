#include<iostream>
#include<string>
#include<cmath>
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
        long long x,y,z,n;
        std::cin>>x>>y>>z>>n;
        
        long long bcnn=BCNN(x,BCNN(y,z));

        long long s= ceil(pow(10,n-1)/bcnn);
        if(bcnn*s < pow(10,n)) std::cout<<bcnn*s<<"\n";
        else std::cout<<"-1\n";
        
    }
}