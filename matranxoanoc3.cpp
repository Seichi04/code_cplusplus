#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void inp(std::vector<std::vector<long long>> &a,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>a[i][j];
        }
    }
}

void buildSpiralMatrix(std::vector<std::vector<long long>> a,std::vector<long long> &ans,int i,int j,int n,int m,int k)
{
    if(i>=n || j>=m) return;
    if(ans.size()==k) return;
    for(int p=j;p<m;p++) ans.push_back(a[i][p]);
    if(ans.size()==k) return;
    for(int p=i+1;p<n;p++) ans.push_back(a[p][m-1]);
    if(ans.size()==k) return;
    if((n-1)!=i)
        for(int p=m-2;p>=j;p--) ans.push_back(a[n-1][p]);
    if(ans.size()==k) return;
    if((m-1)!=j)
        for(int p=n-2;p>i;p--) ans.push_back(a[p][j]);
    if(ans.size()==k) return;
    buildSpiralMatrix(a,ans,i+1,j+1,n-1,m-1,k);
}

void solve(int n,int m,int k)
{
    std::vector<std::vector<long long>> a(n,std::vector<long long> (m,0));
    inp(a,n,m);

    std::vector<long long> ans;

    buildSpiralMatrix(a,ans,0,0,n,m,k);

    std::cout<<ans[k-1]<<"\n";
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
        int n,m,k;
        std::cin>>n>>m>>k;
        solve(n,m,k);
    }

}