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
        long long n,x;
        std::cin>>n>>x;
        std::vector<long long> a(n,0);
        std::map<long long,long long> fre;
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            fre[a[i]]++;
        }
        bool flag=false;
        for(int i=0;i<n;i++)
        {
            if(fre[x+a[i]]!=0 || fre[a[i]-x]!=0)
            {
                flag=true;
                break;
            }
        }
        if(flag) std::cout<<"1\n";
        else std::cout<<"-1\n";
    }
}