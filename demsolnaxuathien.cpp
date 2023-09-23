#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,x;
        std::cin>>n>>x;
        long long count=0;
        for(long long i=0;i<n;i++)
        {
            long long temp;
            std::cin>>temp;
            if(temp==x) count++;
        }
        if(count==0) std::cout<<"-1\n";
        else
        {
            std::cout<<count<<"\n";
        }
    }
}