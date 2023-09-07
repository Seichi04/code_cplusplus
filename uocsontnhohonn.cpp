#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
bool check(long long n)
{
    if(n<=1) return false;
    for(long long i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<long long> arr;
        for(long long i=0;i<=n/2;i++)
        {
            if(check(i)) arr.push_back(i);
            if(check(n-i) && i!=n-i) arr.push_back(n-i);
        }
        std::sort(arr.begin(),arr.end());

        for(int i:arr)
        {
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
}
