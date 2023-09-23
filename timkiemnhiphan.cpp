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
        bool flag= false;
        for(long long i=0;i<n;i++)
        {
            long long temp;
            std::cin>>temp;
            if(temp==x) 
            {
                flag=true;
            }
        }
        if(flag)
        {
            std::cout<<"1\n";
        }
        else
        {
            std::cout<<"-1\n";
        }
    }
}