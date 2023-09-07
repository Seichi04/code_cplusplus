#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void getin(std::vector<std::vector<int>> &a,int &n)
{
    std::cin>>n;
    for(int i=0;i<n;i++)
    {
        std::vector<int> ex;
        for(int j=0;j<n;j++)
        {
            int temp;std::cin>>temp;
            ex.push_back(temp);
        }
        a.push_back(ex);
    }
}
void print(std::vector<std::vector<int>> ans,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++) std::cout<<ans[i][j]<<" ";
        std::cout<<"\n";
    }
}
void nhan(std::vector<std::vector<int>> &ans,std::vector<std::vector<int>> a,std::vector<std::vector<int>> b,int br,int er,int bc,int ec,int n,int m)
{
    

    for(int i=br;i<=er;i++)
    {
        for(int j=bc;j<=ec;j++)
        {
            ans[i][j] = a[i][j] * b[i-br][j-bc];
        }
    }
    if(er == (n-1) && ec == (n-1)) return;
    if(ec < n-1)
        nhan(ans,a,b,br,er,bc+m,ec+m,n,m);
    else
        nhan(ans,a,b,br+m,er+m,0,m-1,n,m);
}



void solve(std::vector<std::vector<int>> a,std::vector<std::vector<int>> b,int n,int m)
{
    std::vector<std::vector<int>> ans(n,std::vector<int>(n,0));

    nhan(ans,a,b,0,m-1,0,m-1,n,m);

    print(ans,n);

}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n,m;
    std::vector<std::vector<int>> a,b;
    getin(a,n);
    getin(b,m);

    solve(a,b,n,m);
}