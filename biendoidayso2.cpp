#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        
        std::vector<long long> a(n,0),b(n,0);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
            {
                std::cout<<a[i]*a[i+1]<<" ";
            }
            else if(i==(n-1))
            {
                std::cout<<a[i]*a[i-1]<<" ";
            }
            else
            {
                std::cout<<a[i-1]*a[i+1]<<" ";
            }
        }
        std::cout<<"\n";
    }
}