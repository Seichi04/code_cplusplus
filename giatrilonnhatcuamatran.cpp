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

    int n;
    std::cin>>n;
    std::vector<std::vector<int>> a(n,std::vector<int>(n,0));
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++) std::cin>>a[i][j];
    
}