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

    int n;std::cin>>n;
    std::vector<std::vector<int>> a(n+1,std::vector<int>(n+1,0));
    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            std::cin>>a[i][j];
            


        }
    }
}