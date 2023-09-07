#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void Swap(std::vector<std::vector<int>> &a,int row1,int row2)
{

}

int findRank(std::vector<std::vector<int>> &a)
{
    int n= a.size(),m=a[0].size();

    int rank= n;

    for(int row=0;row<rank;row++)
    {
        if(a[row][row])
    }
}

void solve(int n,int m)
{
    std::vector<std::vector<int>> a(n,std::vector<int>(m,0));
    std::cout<<findRank(a)<<"\n";
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