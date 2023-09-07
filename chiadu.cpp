#include<iostream>
#include<cmath>
#include<string>
#include<iomanip>

int solve(int a,int m)
{
    int i=1;
    while(i<m)
    {
        int temp=(i*a)%m;
        if(temp==1) return i;
        i++;
    }
    return -1;
}

int main()
{
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(0);
    // std::cout.tie(0);

    int t;
    std::cin>>t;
    while(t--)
    {
        int a,m;
        std::cin>>a>>m;
        std::cout<<solve(a,m)<<"\n";
    }
}