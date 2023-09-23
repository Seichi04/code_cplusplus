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
        long long ns=s.size();
        long long i=ns-2,j=ns-1;
        while(s[i]<=s[i+1])
        {
            i--;
        }
        if(i<0)
        {
            std::cout<<"-1\n";
            continue;
        }
        else
        {
            while(s[j]>=s[i] || s[j]==s[j-1])
            {
                j--;
            }
            std::swap(s[i],s[j]);
            std::cout<<s<<'\n';
        }
        
    }
}
