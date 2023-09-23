#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>


int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        bool flag=true;
        std::map<char,int> fre;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]<'0' || s[i]>'9') 
            {
                flag=false;
                break;
            }
            fre[s[i]]++;
        }
        if(!flag || s[0]=='0')
        {
            std::cout<<"INVALID\n";
        }
        else
        {
            bool f=true;
            for(char i='0';i<='9';i++)
            {
                if(fre[i]==0)
                {
                    std::cout<<"NO\n";
                    f=false;
                    break;
                }
            }
            if(f) std::cout<<"YES\n";
        }
    }
}