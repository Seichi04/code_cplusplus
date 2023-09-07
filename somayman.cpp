#include<iostream>
#include<iostream>
#include<string>

int main()
{
    int t;
    std::cin>>t;

    while(t--)
    {

        std::string s;
        std::cin>>s;
        int n=s.length();
        if(s[n-2]=='8' && s[n-1]=='6')
        {
            std::cout<<"1\n";
        }
        else
        {
            std::cout<<"0\n";
        }

        
    }
}