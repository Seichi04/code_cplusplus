#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void getMax(std::vector<long long> v,std::vector<long long> &ans)
{
    ans.push_back(std::max(std::max(v[0],v[1]),v[2]));
}

void solve(int n,int k)
{
    std::vector<long long> a(n,0);
    for(long long i=0;i<n;i++) std::cin>>a[i];
    long long max=a[0];
    std::vector<long long> v;
    v.push_back(a[0]);
    v.push_back(a[1]);
    v.push_back(a[2]);
    std::vector<long long> ans;
    getMax(v,ans);
    for(int i=3;i<n;i++)
    {
        int temp=v.front();
        v.erase(v.begin());
        v.push_back(a[i]);
        if(a[i] >= temp) ans.push_back(a[i]);
        else getMax(v,ans);
    }

    for(auto i:ans)
    {
        std::cout<<i<<" ";
    }
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