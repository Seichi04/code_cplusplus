#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void SpiralMatrix(std::vector<std::vector<int>> &ma,std::vector<int> &a,int i,int j,int n,int m)
{
    if(i>=n || j>=m || a.empty()) return;
    
    for(int p=j;p<m;p++) 
    {
        ma[i][p] = a.front();
        a.erase(a.begin());
    }
    for(int p=i+1;p<n;p++)
    {
        ma[p][m-1] = a.front();
        a.erase(a.begin());
    }
    if((n-1)!=i)
    {
        for(int p=m-2;p>=j;p--)
        {
            ma[n-1][p] = a.front();
            a.erase(a.begin());
        }
    }
    if((m-1)!=j)
    {
        for(int p=n-2;p>i;p--)
        {
            ma[p][j] = a.front();
            a.erase(a.begin());
        }
    }
    SpiralMatrix(ma,a,i+1,j+1,n-1,m-1);
}

void solve(int n)
{
    int Size= n*n;
    std::vector<int> a;
    for(int i=0;i<Size;i++)
    {
        int temp;
        std::cin>>temp;
        a.push_back(temp);
    }

    std::sort(a.begin(),a.end());
    std::vector<std::vector<int>> ma(n,std::vector<int>(n,0));
    SpiralMatrix(ma,a,0,0,n,n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) std::cout<<ma[i][j]<<" ";
        std::cout<<"\n";
    }
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);


    int n;std::cin>>n;
    solve(n);
}