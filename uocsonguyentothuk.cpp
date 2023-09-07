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
        int k;
        std::cin>>k;
        long long m=n;
        if(check(n) ) 
        {
            if(k==1)
            {
                std::cout<<n<<"\n";
                continue;
            }
            else
            {
                 std::cout<<"-1\n";
                 continue;
            }
            
        }
        
        std::vector<long long> arr;
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
                    while(temp%i==0)
                    {
                        arr.push_back(i);
                        temp/=i;
                    }
                }
                
                
            }
        }
        std::sort(arr.begin(),arr.end());


        if(arr.size()>=k)
        {
            std::cout<<arr[k-1]<<"\n";
        }
        else
        {
            std::cout<<"-1\n";
        }
    }
}
