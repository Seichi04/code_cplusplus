#include<vector>
#include<iostream>
#include<algorithm>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,x;
        std::cin>>n>>x;
        long long pos=-1;
        bool flag= false;
        for(int i=0;i<n;i++)
        {
            long long temp;
            std::cin>>temp;
            if(temp==x && !flag)
            {
                flag= true;
                pos=i+1;
            }
        }
        std::cout<<pos<<"\n";
    }
}