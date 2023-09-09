#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

long long gcd(long long a,long long b)
{
    if(b==0) return a;
    return gcd(b,a%b);
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,m;
        std::cin>>n>>m;

        long long tong= (1+n)*n/2;
        if((tong+m)%2 !=0 )
        {
            std::cout<<"No\n";
            continue;
        }
        long long a= (tong+m)/2;
        long long b= tong -a;

        if(gcd(a,b)==1) std::cout<<"Yes\n";
        else std::cout<<"No\n";
        

    }
}
