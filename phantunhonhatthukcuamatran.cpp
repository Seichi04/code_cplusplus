#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

int solve(int n,int k)
{
    int m=n*n;
    int a[m];
    for(int i=0;i<m;i++)
    {
        std::cin>>a[i];
    }
    std::sort(a,a+m);

    return a[k-1];
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
        int n,k;
        std::cin>>n>>k;
        std::cout<<solve(n,k)<<'\n';
    }
}
