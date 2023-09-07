#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>




void solve(std::vector<long long> &a,long long n)
{
    long long ans=0;
    std::vector<std::vector<long long>> uoc;

}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        long long n;std::cin>>n;
        std::vector<long long> a;
        for(long long i=0;i<n;i++)
        {
            int temp;std::cin>>temp;
            a.push_back(temp);
        }
        solve(a,n);
    }
}