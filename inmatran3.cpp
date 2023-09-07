#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void print(std::vector<long long> arr)
{
    for(long long k:arr) std::cout<<k<<" ";
    std::cout<<"\n";
}

void fillArray(std::vector<long long> &arr,std::vector<std::vector<long long>> a,int n,int m)
{
    int i=0,j=0;
    bool isUp=true;

    for(int k=0;k<n*m;)
    {
        if(isUp)
        {
            for(;i>=0 && j<m;j++,i--)
            {
                arr.push_back(a[i][j]);
                k++;
            }
            if(i<0 && j<=m-1) i=0;
            if(j==m) i+=2,j--;
        }
        
        else
        {
            for(;j>=0 && i<n;i++,j--)
            {
                arr.push_back(a[i][j]);
                k++;
            }

            if(j<0 && i<=n-1) j=0;
            if(i==n) j+=2,i--;
        }

        isUp= !isUp;
    
    }
   
    
}
void solve(int n,int m)
{
    std::vector<std::vector<long long>> a(n,std::vector<long long>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) std::cin>>a[i][j];
    }

    std::vector<long long> arr;
    fillArray(arr,a,n,m);
    print(arr);
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