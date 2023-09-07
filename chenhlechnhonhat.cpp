#include<iostream>
#include<cmath>
#include<queue>
#include<algorithm>
#include<climits>
long long solve(int n)
{
    int a[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    std::sort(a,a+n);
    long long def=INT_MAX;

    for(int i=1;i<n;i++)
    {
        if(def > (a[i]-a[i-1]))
        {
            def= a[i]-a[i-1];
        }
    }
    return def;
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
        int n;
        std::cin>>n;
        std::cout<<solve(n)<<std::endl;
    }
}