#include<iostream>
#include<cmath>

bool checkcanbang(long long n)
{
    int a=0,b=0;
    while(n!=0)
    {
        int x=n%10;
        if(x%2==0) a++;
        else b++;

        n/=10;
    }

    if(a==b) return true;
    else return false;
}

int main()
{
    int n;
    std::cin>>n;
    int count=0;
    for(long long i=pow(10,n-1);i<pow(10,n);i++)
    {
        if(checkcanbang(i))
        {
            std::cout<<i<<" ";
            count++;
            if(count%10==0) std::cout<<"\n";
        }
    }
}