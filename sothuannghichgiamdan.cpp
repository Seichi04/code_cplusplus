#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
bool check(std::string s)
{
    if(s.size()<=1) return false;
    int l=0,r=s.size()-1;
    while(s[l]==s[r] && l<r)
    {
        l++,r--;
    }
    if(l>=r) return true;
    return false;
}
bool compare(std::pair<std::string,int> a,std::pair<std::string,int> b)
{
    if(a.first.size() != b.first.size())
    {
        return a.first.size() > b.first.size();
    }
    else
    {
        return a.first > b.first;
    }
}
int main()
{
    std::map<std::string,int> fre;
    std::string s;
    while(std::cin>>s)
    {
        if(check(s))
        {
            fre[s]++;
        }
    }

    std::vector<std::pair<std::string,int>> v(fre.begin(),fre.end());
    std::sort(v.begin(),v.end(),compare);

    for(auto i:v)
    {
        std::cout<<i.first<<" "<<i.second<<"\n";
    }
}