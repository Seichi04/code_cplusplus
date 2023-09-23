#include<iostream>
#include<string>
#include<algorithm>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        std::string temp=s;
        std::reverse(temp.begin(),temp.end());
        if(temp == s)
        {
            bool flag=true;
            for(char  c:s)
            {
                if( (int)c % 2 !=0)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) std::cout<<"YES\n";
            else std::cout<<"NO\n";
        }
        else
        {
            std::cout<<"NO\n";
        }
    }
}