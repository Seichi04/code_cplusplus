#include<iostream>
#include<vector>
#include<map>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<long long> a,b;
        for(long long i=0;i<n;i++)
        {
            long long temp;
            std::cin>>temp;
            if(temp!=0) a.push_back(temp);
            else b.push_back(temp);
        }
        for(long long i:a)
        {
            std::cout<<i<<" ";
        }
        for(long long i:b)
        {
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
}