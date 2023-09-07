#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
long long solve(long long n)
{
    long long max= INT_MIN;

    for(long long i=0;i<n;i++)
    {
        long long x;
        std::cin>>x;
        if(max < x) max=x;
    }
    return max;
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
    }
}