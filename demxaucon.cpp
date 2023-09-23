#include<iostream>
#include<string>
#include<sstream>
#include<map>
#include<vector>
#include<set>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        int k;
        std::cin>>k;

        int count=0;
        
        for(int i=0;i<s.size();i++)
        {
            std::set<char> f;
            for(int j=i;j<s.size();j++)
            {
                f.insert(s[j]);
                if(f.size()==k) count++;
                if(f.size()>k) break;
            }
        }
        std::cout<<count<<"\n";
    }
}