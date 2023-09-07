#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
#include<queue>

void solve(long long n,long long k)
{
    std::vector<long long> a(n,0);
    for(long long i=0;i<n;i++) std::cin>>a[i];
    
    std::deque<long long> Max;

    for(long long i=0;i<k;i++)
    {
        while((!Max.empty()) && a[i] >= a[Max.back()]) Max.pop_back();

        Max.push_back(i); 
    }

    for(long long i=k;i<n;i++)
    {
        std::cout<<a[Max.front()]<<" ";

        while((!Max.empty()) && Max.front()<=(i-k)) Max.pop_front();


        while((!Max.empty()) && a[i] >= a[Max.back()]) Max.pop_back();

        Max.push_back(i);
    }
    std::cout<<a[Max.front()];
    std::cout<<"\n";
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
        solve(n,k);
    }
    return 0;
}