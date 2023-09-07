#include<iostream>
#include<cmath>

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
        if(check(n))
        {
            std::cout<<n<<"\n";
        }
        else
        {
            int max=0;
            bool flag= false;
            for(long long i=2;i<=sqrt(n);i++)
            {
                if(n%i==0)
                {
                    if(check(n/i)) 
                    {
                        std::cout<<n/i<<"\n";
                        flag= true;
                        break;
                    }
                    else if(check(i))
                    {
                        max=i;
                    }
                }
                
            }
            if(!flag) std::cout<<max<<"\n";
        }
        
    }
}