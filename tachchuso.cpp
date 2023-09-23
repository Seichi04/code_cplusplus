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
        long long sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                sum+=((int)s[i]-48);
                s.erase(s.begin()+i);
                i--;
            }
        }
        std::sort(s.begin(),s.end());
        s= s+ std::to_string(sum);
        std::cout<<s<<'\n';
    }
}