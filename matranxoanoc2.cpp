#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void fillSpiralArray(std::vector<std::vector<long long>> a,std::vector<long long> &arr,int i,int j,int n,int m)
{
    if(i>=n || j>=m) return;
    
    for(int p=j;p<m;p++) arr.push_back(a[i][p]);
    for(int p=i+1;p<n;p++) arr.push_back(a[p][m-1]);

    if((n-1) != i)
        for(int p=m-2;p>=j;p--) arr.push_back(a[n-1][p]);
    if((m-1) != j)
        for(int p=n-2;p>i;p--) arr.push_back(a[p][j]);

    fillSpiralArray(a,arr,i+1,j+1,n-1,m-1);
}


void solve(int n,int m)
{
    std::vector<std::vector<long long>> a(n,std::vector<long long>(m,0));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++) std::cin>>a[i][j];
    std::vector<long long> arr;

    fillSpiralArray(a,arr,0,0,n,m);

    for(int i=arr.size()-1;i>=0;i--) std::cout<<arr[i]<<" ";
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
        int n,m;
        std::cin>>n>>m;
        solve(n,m);
    }
}