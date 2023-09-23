#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        
        std::map<char,long long> ans;

        for(auto i:s)
        {
            ans[i]++;
        }

        for(auto i:s)
        {
            if(ans[i]==1)
                std::cout<<i;
        }
        std::cout<<"\n";
    }
}