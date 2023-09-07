#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void solve(long long b,long long p)
{
    long long ans=0;

    for(long long i=1;i<p;i++)
    {
        if((i*i)%p==1)
        {
            long long last = i + p*(b/p);
            if(last >b) last-=p;
            ans += ((last-i)/p +1);
        }
    }
    std::cout<<ans<<"\n";
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
        long long b,p;
        std::cin>>b>>p;
        solve(b,p);
    }
}