#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void solve(long long n)
{
    std::vector<long long> a;
    for(long long i=0;i<n;i++)
    {
        long long temp;
        std::cin>>temp;
        a.push_back(temp);
    }
    for(long long dis=n-1;dis>=0;dis--)
    {
        for(long long i=0;i+dis<n;i++)
        {
            if(a[i+dis]>a[i])
            {
                std::cout<<dis<<"\n";
                return;
            }
        }
    }

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