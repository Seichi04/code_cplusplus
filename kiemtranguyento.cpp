#include<iostream>
#include<cmath>
int main()
{
    int n;
    std::cin>>n;
    int count=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count!=0  || n==0 || n==1)
    {
        std::cout<<"NO\n";
    }
    else
    {
        std::cout<<"YES\n";
    }

}