#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

bool checkfibo(int n)
{
    if(n<2) return true;
    
    int first=0;
    int second=1;
    while(second<n)
    {
        second+= first;
        first = second- first;
    }
    if(second==n) return true;
    return false;
}

void solve(int n)
{
    std::vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin>>temp;
        if(checkfibo(temp)) v.push_back(temp);
    }
    for(int i:v)
    {
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
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
        int n;std::cin>>n;
        solve(n);
    }
}