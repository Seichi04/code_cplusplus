#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        long long b,m;
        std::cin>>b>>m;

        std::string temp;
        while(!s.empty())
        {
            temp.push_back(s.front());
            s.erase(s.begin());
            long long x= std::stoll(temp)%m;
            temp=std::to_string(x);
        }

        long long x= stoll(temp);
        long long ans=1;
        while(b>0)
        {
            if(b%2!=0)
            {
                ans= (ans*x)%m;
            }
            x = (x*x)%m;
            b=b/2;
        }
        std::cout<<ans<<"\n";
        
        
    }
}