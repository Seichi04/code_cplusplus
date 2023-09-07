#include<iostream>
#include<string>
#include<cmath>
long long UCLN(long long a,long long b)
{
    if(b==0)
        return a;
    return UCLN(b,a%b);
}

int main()
{
    int t;
    std::cin>>t;

    while(t--)
    {
        long long a,x,y;
        std::cin>>a>>x>>y;
        for(int i=0;i<UCLN(x,y);i++)
        {
        	std::cout<<a;
		}
		std::cout<<"\n";
    }
}