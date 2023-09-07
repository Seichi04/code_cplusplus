#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<set>
long long solve(long long n)
{
    long long a[n];
    for(long long i=0;i<n;i++)
    {
        std::cin>>a[i];
    }

    std::sort(a,a+n);
    std::set<long long> s;
    for(long long i=0;i<n;i++)
    {
        if(a[i]>0) s.insert(a[i]);
    }
    if(s.empty()) return 1;
    std::set<long long>::iterator it;
    long long i=1;
    for(it = s.begin();it!=s.end();it++)
    {
        if(*it != i) return i;
        i++;
    }
    return i;

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