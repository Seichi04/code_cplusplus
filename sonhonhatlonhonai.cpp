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
        
        std::vector<long long> a(n,0),b;
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        b=a;
        std::sort(b.begin(),b.end());

        for(long long i=0;i<n;i++)
        {
            std::vector<long long>::iterator it= std::upper_bound(b.begin(),b.end(),a[i]);
            if(it!= b.end()) std::cout<<*it<<" ";
            else std::cout<<"_ ";
        }
        std::cout<<"\n";
    }
}