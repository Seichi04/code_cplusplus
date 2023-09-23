#include<iostream>
#include<string>
#include<vector>
#include<map>



int main()
{
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--)
    {
        std::string s;
        std::getline(std::cin,s);

        std::vector<long long> a;

        std::map<char,std::pair<int,long long>> fre;

        for(int i=0;i<s.size();i++)
        {
            fre[s[i]].second= fre[s[i]].second + 1 + fre[s[i]].first;
            fre[s[i]].first++;
        }

        long long sum=0;
        for(auto i:fre)
        {
            sum+= i.second.second;
        }

        std::cout<<sum<<"\n";


    }
}