#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void fillArray(std::vector<int> &arr1,std::vector<int> &arr2,int m,std::vector<std::vector<int>> ma,int br,int er,int bc,int ec)
{
    if(br>=er || bc>=er) return;

    for(int i=br;i<=er;i++) arr1.push_back(ma[i][bc]);
    for(int i=bc+1;i<ec;i++) arr1.push_back(ma[er][i]);

    
        for(int i=er;i>=br;i--) arr2.push_back(ma[i][ec]);
    for(int i=ec-1;i>bc;i--) arr2.push_back(ma[br][i]);

    fillArray(arr2,arr1,m,ma,br+1,er-1,bc+1,ec-1);
}

void solve(long long n)
{
    int m=4*n;
    std::vector<std::vector<int>> ma(m,std::vector<int>(m,0));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++) ma[i][j]= i*m+j+1;
    }

    std::vector<int> arr1,arr2;
    fillArray(arr1,arr2,m,ma,0,m-1,0,m-1);
    for(int i=arr2.size()-1;i>=0;i--) std::cout<<arr2[i]<<" ";
    std::cout<<"\n";
    for(int i=arr1.size()-1;i>=0;i--) std::cout<<arr1[i]<<" ";
    std::cout<<"\n";
    
}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        int n;std::cin>>n;
        solve(n);
    }
}