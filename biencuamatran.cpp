#include<iostream>
#include<vector>
#include<algorithm>

void solve(int n)
{
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1)
            {
                std::cout<<a[i][j]<<" ";
            }
            else{
                std::cout<<"  ";
            }
        }
        std::cout<<'\n';
    }
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
        int n;
        std::cin>>n;
        solve(n);
    }
}