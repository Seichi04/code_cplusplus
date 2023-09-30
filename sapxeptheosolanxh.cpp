#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>
std::map<long long,long long> fre;

bool compare(long long a,long long b)
{
    if(fre[a]!=fre[b])
    {
        return fre[a]>fre[b];
    }
    else 
    {
        return a<b;
    }
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<long long> a(n,0);

        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
            fre[a[i]]++;
        }

        std::sort(a.begin(),a.end(),compare);

        for(auto i:a)
        {
            std::cout<<i<<" ";
        }
        std::cout<<"\n";

        fre.clear();
    }
}