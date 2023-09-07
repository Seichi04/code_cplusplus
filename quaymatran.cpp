#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void xoay(std::vector<std::vector<int>> &a)
{
    int n= a.size();
    int m=a[0].size();

    std::vector<std::vector<int>> result(m,std::vector<int> (n,0));

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            
        }
    }
}

void solve(int n,int m)
{
    std::vector<std::vector<int>> a(n,std::vector<int> (m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>a[i][j];
        }
    }

    xoay(a);

    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<a[i].size();j++)
        {
            std::cout<<a[i][j]<<" ";
        }
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
        int n,m;
        std::cin>>n>>m;
        solve(n,m);
    }
}