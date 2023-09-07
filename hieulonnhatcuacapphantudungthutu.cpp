#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

long long solve(long long n)
{
    std::vector<int> v;
    for(long long i=0;i<n;i++)
    {
        long long temp;
        std::cin>>temp;
        v.push_back(temp);
    }

    long long Max=0;
    for(long long i=0;i<n;i++)
    {
        for(long long j=i+1;j<n;j++)
        {
            if(v[j]-v[i] >Max) Max= v[j]-v[i];
        }
    }

    if(Max>0) return Max;
    else return -1;
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
        std::cout<<solve(n)<<std::endl;
    }

}