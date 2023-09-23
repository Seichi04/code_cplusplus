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
        std::map<char,int> fre;
        int max=0;
        for(int i=0;i<s.size();i++)
        {
            fre[s[i]]++;
            if(max < fre[s[i]]) max= fre[s[i]];
        }
        if(max <= ceil((float)s.size()/2))
        {
            std::cout<<"1\n";
        }
        else
        {
            std::cout<<"0\n";
        }
    }
}