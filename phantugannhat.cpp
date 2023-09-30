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
       
        long long l,r;
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(a[i]==x && !flag)
            {
                l=i;
                r=i;
                flag=true;
            }
            if(a[i]==x && flag)
            {
                r=i;
            }
        }
        l--,r++;
        long long count=0;
        while(count<k)
        {
            if(l>=0)
            {
                std::cout<<a[l--]<<" ";
                count++;
            }
            if(count==k) break;
            if(r<n)
            {
                std::cout<<a[r++]<<" ";
                count++;
            }
        }
        std::cout<<"\n";
        
    }
}