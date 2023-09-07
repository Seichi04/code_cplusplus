#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
void getin(std::vector<std::vector<int>> &a)
{
    int n=a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)    std::cin>>a[i][j];
    }
}
void getin(std::vector<int> &a)
{
    int n=a.size();
    for(int i=0;i<n;i++) std::cin>>a[i];
}
int cal(std::vector<std::vector<int>> a,std::vector<int> h,int i,int j)
{
    int sum=0;
    int mark=0;
    for(int x=i+2;x>=i;x--)
    {
        for(int k=j+2;k>=j;k--)
        {
            sum+= (a[x][k]*h[mark++]);
        }
    }
    return sum;
}

void solve(int n,int m)
{
    std::vector<std::vector<int>> a(n,std::vector<int>(m,0));getin(a);
    //std::vector<std::vector<int>> h(3,std::vector<int>(3,0));getin(h);
    std::vector<int> h(9,0);getin(h);
    

    int x=n-2,y=m-2;
    std::vector<std::vector<int>> ans(x,std::vector<int> (y,0));
    int result=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            result+=cal(a,h,i,j);
            
        }
        
    }
    std::cout<<result<<"\n";
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


