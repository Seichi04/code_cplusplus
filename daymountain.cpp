#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

bool solve(int n)
{
    std::vector<int> v;
    for(int i=0;i<n;i++)
    {
        int temp;std::cin>>temp;
        v.push_back(temp);
    }
    int l,r;std::cin>>l>>r;
    bool flag=true;
    while(flag && l<r)
    {
        flag=false;
        if(v[l+1]>=v[l])
        {
            l++;
            flag=true;
        }
        if(v[r-1]>=v[r])
        {
            r--;
            flag=true;
        }
    }

    
    if(l==r) return true;
    else return false;
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
        if(solve(n)) std::cout<<"Yes\n";
        else std::cout<<"No\n";
    }
}