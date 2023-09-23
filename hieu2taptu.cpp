#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<sstream>
#include<set>
int main()
{
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--)
    {
        std::string s1,s2;
        std::map<std::string,int> fre2;
        std::getline(std::cin,s1);
        std::getline(std::cin,s2);
        std::stringstream ss1(s1),ss2(s2);
        std::string word;
        std::set<std::string> a;
        while(ss2>>word)
        {
            fre2[word]++;
        }
        while(ss1>>word)
        {
            if(fre2[word]==0)
            {
                a.insert(word);
            }
        }
        std::vector<std::string> v;
        for(std::set<std::string>::iterator it=a.begin();it!=a.end();it++)
        {
            v.push_back(*it);
        }
        std::sort(v.begin(),v.end());
        for(auto s:v)
        {
            std::cout<<s<<" ";
        }
        std::cout<<"\n";
    }
}