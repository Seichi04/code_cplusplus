#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

bool check(long long n)
{
    if(n<2) return false;
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0) return false;
    }
    return true;
}

long long solve(long long l,long long r)
{
    long long count=0;
    for(int i=l;i<=r;i++)
    {
        if(check(i)) count++;
    }
    return count;
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
        long long l,r;
        std::cin>>l>>r;
        std::cout<<solve(l,r)<<'\n';
    }
}