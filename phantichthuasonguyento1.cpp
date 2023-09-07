#include<iostream>
#include<iostream>
#include<string>

int main()
{
    int t;
    std::cin>>t;

    while(t--)
    {

        int n;
        std::cin>>n;

        for(int i=2;n!=1;i++)
        {
            int count=0;
            while(n%i==0)
            {
                count++;
                n/=i;
            }

            if(count!=0) std::cout<<i<<" "<<count<<" ";
        }

        std::cout<<"\n";
        
    }
}