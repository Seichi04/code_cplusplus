#include<cmath>
#include<iostream>
#include<string>

int main()
{
        long long n;
        std::cin>>n;

        for(long long i=2;i<=sqrt(n);i++)
        {
            long long count=0;
            while(n%i==0)
            {
                count++;
                n/=i;
            }

            if(count!=0) 
            {
                std::cout<<i<<" "<<count<<"\n";
            }
        }
        if(n!=1)
        {
            std::cout<<n<<" 1\n";
        }
}