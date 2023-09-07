#include<iostream>
#include<string>

long UCLN(long a,long b)
{
    while (a!=b)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }

    return a;
}

int main()
{
    int t;
    std::cin>>t;

    while(t--)
    {

        long a,b;
        std::cin>>a>>b;
        long u= UCLN(a,b);
        std::cout<<a*b/u<<" "<<u<<"\n";

        
    }
}