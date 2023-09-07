#include<iostream>
#include<cmath>
#include<iomanip>

long long giaithua(int i)
{
    if(i==1) return 1;
    else return i*giaithua(i-1);
}

int main()
{
    int n;
    long long sum=0;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+= giaithua(i);
    }

    std::cout<<sum;
}