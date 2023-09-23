#include<iostream>
#include<set>
#include<string>

int main()
{
    long long n;
    std::cin>>n;
    std::cin.ignore();
    std::set<std::string> ans;
    while(n--)
    {
        std::string s;
        
        std::getline(std::cin,s);
        ans.insert(s);
    }

    std::cout<<ans.size();
}