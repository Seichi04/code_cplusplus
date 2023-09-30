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
        long long n1,n2,n3;
        std::cin>>n1>>n2>>n3;
        std::vector<long long> a1(n1,0),a2(n2,0),a3(n3,0);

        // std::map<long long,long long> fre;
        // for(long long i=0;i<n1;i++)
        // {
        //     std::cin>>a1[i];
        //     fre[a1[i]]=1;
        // }
        // for(long long i=0;i<n2;i++)
        // {
        //     std::cin>>a2[i];
        //     if(fre[a2[i]]==1) fre[a2[i]]=2;
        // }
        // for(long long i=0;i<n3;i++)
        // {
        //     std::cin>>a3[i];
        //     if(fre[a3[i]]==2) fre[a3[i]]=3;
        // }
        // bool flag=false;
        // for(auto i:a1)
        // {
        //     if(fre[i]==3)
        //     {
        //         std::cout<<i<<" ";
        //         flag=true;
        //     }
        // }
        // if(!flag)
        // {
        //     std::cout<<"-1";
        // }
        // std::cout<<"\n";

        for(int i=0;i<n1;i++)
        {
            std::cin>>a1[i];
        }
        for(int i=0;i<n2;i++)
        {
            std::cin>>a2[i];
        }
        for(int i=0;i<n3;i++)
        {
            std::cin>>a3[i];
        }
        bool flag= false;
        while(!a1.empty() && !a2.empty() && !a3.empty())
        {
            long long m= std::max(a1[0],std::max(a2[0],a3[0]));
            if(a1[0]==m && a2[0]==m && a3[0]==m)
            {
                flag=true;
                std::cout<<m<<" ";
                a1.erase(a1.begin());
                a2.erase(a2.begin());
                a3.erase(a3.begin());
            }
            else
            {
                if(a1[0]!=m) a1.erase(a1.begin());
                if(a2[0]!=m) a2.erase(a2.begin());
                if(a3[0]!=m) a3.erase(a3.begin());
            }
        }
        if(!flag)
        {
            std::cout<<"-1";
        }
        std::cout<<"\n";
    }
}