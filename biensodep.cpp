#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
bool check(std::string s)
{
    int i=0;
    while(s[i]<s[i+1] && i<(s.size()-1)) i++;
    if(i==(s.size()-1)) return true;

    i=0;
    while(s[i]==s[i+1] && i<(s.size()-1)) i++;
    if(i==(s.size()-1)) return true;

    if(s[0]==s[1] && s[1]==s[2] && s[3]==s[4]) return true;

    i=0;
    while((s[i]=='6' || s[i]=='8') && i<s.size()) i++;
    if(i==s.size()) return true;

    return false;
}


int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        s.erase(s.begin(),s.begin()+5);
        s.erase(s.begin()+3);
        if(check(s))
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }
    }
}