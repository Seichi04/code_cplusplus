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
        long long m;
        std::cin>>m;

        std::string temp;
        while(!s.empty())
        {
            temp.push_back(s.front());
            s.erase(s.begin());
            long long x= std::stoll(temp)%m;
            temp=std::to_string(x);
        }
        std::cout<<temp<<"\n";
    }
}