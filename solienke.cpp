#include<iostream>
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
        bool flag= true;
        for(int i=0;i<s.length()-1;i++)
        {
            if(abs((int)s[i+1]- (int)s[i]) != 1)
            {
                flag= false;
                break;
            }
        }

        if(flag) std::cout<<"YES\n";
        else std::cout<<"NO\n";

    }
}