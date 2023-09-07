#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

int solve(int n)
{
    std::vector<std::vector<int>> a(n,std::vector<int>(n,0));
    std::vector<int> row(n,0);
    std::vector<int> column(n,0);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>a[i][j];
            row[i]+= a[i][j];
            column[j]+= a[i][j];
        }
    }

    std::sort(row.begin(),row.end());
    std::sort(column.begin(),column.end());

    int count1=0,count2=0;
    for(int i=0;i<n-1;i++)
    {
        count1 =count1+ row[n-1]-row[i];
        count2 =count2+ column[n-1]- column[i];
    }
    return (count1 > count2)? count1:count2;
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
        std::cout<<solve(n)<<"\n";
    }
}