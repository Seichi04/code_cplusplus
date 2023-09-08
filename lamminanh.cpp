#include<iostream>
#include<cmath>
#include<vector>
#include<iomanip>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin>>t;
    while(t--)
    {
        int n,m,l;
        std::cin>>n>>m>>l;
        std::vector<std::vector<int>> a(n+1,std::vector<int>(m+1,0));
        for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++) 
            {
                std::cin>>a[i][j];
                a[i][j]= a[i][j] + a[i-1][j] + a[i][j-1] - a[i-1][j-1];
            }

        for(int i=1;i<=n-l+1;i++)
        {
            for(int j=1;j<=m-l+1;j++)
            {
                int sum= a[i+l-1][j+l-1] - a[i+l-1][j-1] - a[i-1][j+l-1] + a[i-1][j-1];
                std::cout<<floor(sum/(l*l))<<" ";
            }
            std::cout<<"\n";
        }
        
        
        
    }
}