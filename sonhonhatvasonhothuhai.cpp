#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        long long min1,min2;
        for(int i=0;i<n;i++)
        {
            long long temp;
            std::cin>>temp;
            if(i==0)
            {
                min1=temp;
                min2=temp;
            }
            else
            {
                if(temp<min1)
                {
                    min2=min1;
                    min1=temp;
                }
                else if(temp<min2 && temp>min1)
                {
                    min2=temp;
                }
            }
        }
        if(min2!=min1)
        {
            std::cout<<min1<<" "<<min2<<"\n";
        }
        else
        {
            std::cout<<"-1\n";
        }
    }
}