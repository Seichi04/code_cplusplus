#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

void change(char &c)
{
    if(c=='A') c='B';
    else c='A';
}

int main()
{
    std::string s;
    std::cin>>s;

    long long ans=0;
    while(s.back()=='A') s.pop_back();

    for(int i=0;i<s.size();i++)
    {
        if(i==0 && s[i]!=s[i+1])
        {
            change(s[i]);
            ans++;
        }
        else if( i>0 && i<(s.size()-1) && s[i]!=s[i-1]  && s[i]!=s[i+1])
        {
            change(s[i]);
            ans++; 
        }
        else if( i==(s.size()-1) && s[i]!=s[i-1])
        {
            change(s[i]);
            ans++;
        }
    }



    std::vector<std::pair<char,int>> fre;
    for(int i=0;i<s.size();i++)
    {
        if(i==0 || (s[i]!=s[i-1]))
        {
            fre.push_back({s[i],1});
        }
        else
        {
            fre.back().second++;
        }
    }

    if(fre.back().first=='A') fre.pop_back();

    ans=ans+fre.size();

    std::cout<<ans;

    
    
    
}