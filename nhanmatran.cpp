#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

const int MAX=50;

void getin(int n,int m,int a[MAX][MAX])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            std::cin>>a[i][j];
        }
    }
}

void multipli(int n,int m,int p,int c[MAX][MAX],int a[MAX][MAX],int b[MAX][MAX])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            c[i][j]=0;
            for(int k=0;k<m;k++)
            {
                c[i][j]+= (a[i][k]* b[k][j]);
            }
        }
    }
}

void solve(int n,int m,int p)
{
    int a[MAX][MAX],b[MAX][MAX];
    getin(n,m,a);getin(m,p,b);

    int c[MAX][MAX];
    multipli(n,m,p,c,a,b);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<p;j++)
        {
            std::cout<<c[i][j]<<' ';
        }
        std::cout<<'\n';
    }

}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n,m,p;
    std::cin>>n>>m>>p;
    solve(n,m,p);

}