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

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        for(int i=1;i<=n;i+=2)
        {
            if(check(i)) std::cout<<i<<" ";
            else if(i==1) std::cout<<i<<" ";
            else
            {
                for(int j=3;j<=sqrt(i);j+=2)
                {
                    if(check(j) && i%j==0)
                    {
                        std::cout<<j<<" ";
                        break;
                    }
                }
            }
            if(i+1<=n) std::cout<<"2 ";
            
        }
        std::cout<<"\n";
    }
}
