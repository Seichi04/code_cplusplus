#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,m;
        std::cin>>n>>m;
        long long a,b;
        for(int i=0;i<n;i++)
        {
            if(i==0) std::cin>>a;
            else
            {
                long long temp;
                std::cin>>temp;
                a= std::max(a,temp);
            }
            
        }

        for(int i=0;i<m;i++)
        {
            if(i==0) std::cin>>b;
            else
            {
                long long temp;
                std::cin>>temp;
                b= std::min(b,temp);
            }
        }

        std::cout<<a*b<<"\n";
    }
}