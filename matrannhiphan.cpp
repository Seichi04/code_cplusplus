#include<iostream>
#include<vector>

int solve(int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        std::cin>>a>>b>>c;
        if(a+b+c >=2) count++;
    }
    return count;
}


int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;std::cin>>n;
    std::cout<<solve(n)<<'\n';
}