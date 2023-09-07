#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void solve(long long n)
{
    if(n<2) 
    {
        std::cout<<"YES\n";
        return;
    }
    long long first=0;
    long long second=1;
    while(second<n)
    {
        second+=first;
        first=second-first;
    }
    if(second==n) std::cout<<"YES\n";
    else std::cout<<"NO\n";
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
        long long n;
        std::cin>>n;
        solve(n);
    }
}