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
        long long n;std::cin>>n;
        std::map<long long,long long> fre;
        long long ans;
        bool flag= false;
        for(long long i=0;i<n;i++)
        {
            long long temp;
            std::cin>>temp;
            fre[temp]++;
            if(fre[temp]==2 && !flag)
            {
                ans=temp;
                flag= true;
            }
        }
        if(flag) std::cout<<ans<<"\n";
        else std::cout<<"-1\n";
    }
}