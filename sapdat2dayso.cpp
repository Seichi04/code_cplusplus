#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
std::vector<long long> a1;
std::vector<long long> a2;

bool compare(long long a,long long b)
{
    std::vector<long long>::iterator it1=std::find(a2.begin(),a2.end(),a);
    std::vector<long long>::iterator it2=std::find(a2.begin(),a2.end(),b);
    if(it1!=a2.end() || it2!=a2.end()) return std::distance(a2.begin(),it1) < std::distance(a2.begin(),it2);
    else
    {
        return a<b;
    }
}


void solve()
{
    int n=a1.size(),m=a2.size();
    std::sort(a1.begin(),a1.end(),compare);

    for(long long i:a1) std::cout<<i<<" ";
    std::cout<<"\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        long long n,m;
        std::cin>>n>>m;
        if(!a1.empty()) a1.clear();
        if(!a2.empty()) a2.clear();
        for(long long i=0;i<n;i++)
        {
            long long temp;std::cin>>temp;
            a1.push_back(temp);
        }
        for(long long i=0;i<m;i++)
        {
            long long temp;std::cin>>temp;
            a2.push_back(temp);
        }
        solve();
    }
}