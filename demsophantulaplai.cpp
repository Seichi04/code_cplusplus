#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

long long solve(long long n)
{
    std::vector<long long> v;
    for(long long i=0;i<n;i++)
    {
        long long temp;
        std::cin>>temp;
        v.push_back(temp);
    }

    std::sort(v.begin(),v.end());
    long long count=0;
    for(long long i=0;i<n;i++)
    {
        if( i!=0 && v[i-1] != v[i] && v[i]==v[i+1]) count++;
        if(i==0 && v[i]== v[i+1]) count++;
        if(v[i] == v[i+1]) count++;
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
        long long n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
    }
}