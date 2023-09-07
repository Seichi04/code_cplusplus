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
        long long m=n;
        if(check(n)) 
        {
            std::cout<<"0\n";
            continue;
        }
        std::vector<long long> arr;
        bool flag= true;
        for(long long i=2;i<=sqrt(n);i++)
        {
            long long temp=n;
            if(n%i==0)
            {
                
                if(check(n/i) && i!=n/i) arr.push_back(n/i);
                if(check(i)) 
                {
                    arr.push_back(i);
                    temp/=i;
                    if(temp%i==0)
                    {
                        flag=false;
                        break;
                    }
                }
                
                
            }
        }
        if(arr.size()!=3 || !flag) std::cout<<"0\n";
        else std::cout<<"1\n"; 
    }
}
