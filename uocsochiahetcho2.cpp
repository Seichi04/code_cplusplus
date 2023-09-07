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
        if(n==2)
        {
            std::cout<<"1\n";
            continue;
        }
        if(n%2!=0) 
        {
            std::cout<<"0\n";
            continue;
        }
        std::vector<long long> arr;
        long long count2=0;
        long long count=1;
        for(long long i=2;i<=sqrt(n);i++)
        {
            long long temp=n;
            long long tempcount1=0;
            long long tempcount2=arr.size();
            if(n%i==0)
            {
                if(check(n/i) && i!=n/i) 
                {
                    arr.push_back(n/i);
                    tempcount1=1;
                }
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
                if(arr.size()==tempcount2) continue;
                if(i==2) 
                {
                    if(tempcount1==1) count*=2;
                    count2 = arr.size()- tempcount1-tempcount2;
                }
                else 
                {
                    if(tempcount1==1) count*=2;
                    count= count *( arr.size()-tempcount1-tempcount2 +1);
                }
            }
            
        }
        std::cout<<count2 * count<<"\n";  

    }
}
