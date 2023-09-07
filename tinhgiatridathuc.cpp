#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

const int MOD= 1e9 +7;

int solve(long long n,long long x)
{
    long long sum=0;
    for(long long i=0;i<n;i++)
    {
        long long temp;
        std::cin>>temp;
        sum = (sum*x + temp) % MOD;
    }
    return sum;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        long long n,x;
        std::cin>>n>>x;
        std::cout<<solve(n,x)<<std::endl;

    }
}
