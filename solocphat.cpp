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
        int n= s.length();
        bool flag= true;
        for(int i=0;i<n;i++)
        {
            if(s[i]!='0' && s[i]!= '6' && s[i]!= '8')
            {
                flag= false;
                break;
            }
        }
        if(flag) std::cout<<"YES\n";
        else std::cout<<"NO\n";

    }
}
