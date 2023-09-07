#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

long long solve(long long n,long long k)
{
    std::vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin>>temp;
        v.push_back(temp);
    }
    std::sort(v.begin(),v.end());

    return v[k-1];
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
        long long n,k;
        std::cin>>n>>k;
        std::cout<<solve(n,k)<<std::endl;
    }
}