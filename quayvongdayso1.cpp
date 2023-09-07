#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
#include<list>
void solve(long long n,long long d)
{
    std::vector<long long> a1,a2;

    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin>>temp;
        if(i<d) a2.push_back(temp);
        else a1.push_back(temp);
    }

    for(long long i:a1) std::cout<<i<<" ";
    for(long long i:a2) std::cout<<i<<" ";
    std::cout<<std::endl;
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
        long long n,d;
        std::cin>>n>>d;
        solve(n,d);
    }
}