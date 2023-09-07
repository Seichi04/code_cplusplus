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

        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='0' && s[i+1]=='8' && s[i+2]== '4')
            {
                s.erase(i,3);
            }
        }

        std::cout<<s<<"\n";
    }
}