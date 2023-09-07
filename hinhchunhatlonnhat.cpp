#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

bool compare(const int a,const int b)
{
    return a>b;
}

void solve(int n,int m)
{
    std::vector<std::vector<int>> a(n,std::vector<int>(m,0));
    std::vector<std::vector<int>> matrixSort(n,std::vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        matrixSort[0][i]=a[0][i];
        for(int j=1;j<n;j++)
        {
            matrixSort[j][i] = (a[j][i]==0) ? 0 : matrixSort[j-1][i]+1;
        }
    }

    for(int i=0;i<n;i++)
    {
        std::sort(matrixSort[i].begin(),matrixSort[i].end(),compare);
    }

    int currArea,maxArea=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            currArea = (j+1)*matrixSort[i][j];
            if(currArea > maxArea) maxArea=currArea;
        }
    }
    std::cout<<maxArea<<"\n";
    
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