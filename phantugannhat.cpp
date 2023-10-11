#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>
#include<cmath>
long long x;
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,k;
        std::cin>>n;
        std::vector<long long> a(n,0);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        std::cin>>k>>x;
       
        int i=0,j=0;
        bool flagI=1,flagJ=1;
        for(int z=0;z<n;z++)
        {
            // if(a[z+1] >= x && flagI)
            // {
            //     i=z;
            //     flagI=0;
            // }
            // if(a[z] > x && flagJ)
            // {
            //     j=z;
            //     flagJ=0;
            // }
            // if(!flagI && !flagJ) 
            //     break;
            if(a[z]>= x)
            {
                i=z;
                break;
            }
        }
        for(int z= i- k/2 ;z<i;z++)
        {
            if(z<0)
                std::cout<<0<<" ";
            else  
                std::cout<<a[z]<<" ";
        }
        for(int z= i+1;z<=i+k/2;z++)
        {
            if(z>=n)
                std::cout<<0<<" ";
            else
                std::cout<<a[z]<<" ";
        }
        std::cout<<"\n";
    }
}