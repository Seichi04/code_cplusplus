#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
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
        long long a[n][m],h[3][3];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) std::cin>> a[i][j];
        
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++) std::cin>> h[i][j];

        long long sum=0;
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                // long long temp = h[0][0]*a[i+1][j+1] + h[0][1]*a[i+1][j] + h[0][2]*a[i+1][j-1]+
                //                  h[1][0]*a[i][j+1]   + h[1][1]*a[i][j]   + h[1][2]*a[i][j-1]+
                //                  h[2][0]*a[i-1][j+1] + h[2][1]*a[i-1][j] + h[2][2]*a[i-1][j-1];
                long long temp = h[0][0]*a[i-1][j-1] + h[0][1]*a[i-1][j] + h[0][2]*a[i-1][j+1]+
                                 h[1][0]*a[i][j-1]   + h[1][1]*a[i][j]   + h[1][2]*a[i][j+1]+
                                 h[2][0]*a[i+1][j-1] + h[2][1]*a[i+1][j] + h[2][2]*a[i+1][j+1];
                sum+=temp;
            }
        }
        std::cout<<sum<<"\n";

    }
}