#include<iostream>
#include<string>
#include<set>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;

        std::cin.ignore();
        std::getline(std::cin,s);

        if(s.size()<26)
        {
            std::cout<<"0\n";
            continue;
        }

        int k;
        std::cin>>k;

        std::set<char> fre;

        for(long long i=0;i<s.size();i++)
        {
            fre.insert(s[i]);
        }

        if(k >= (26-fre.size()))
        {
            std::cout<<"1\n";
        }
        else
        {
            std::cout<<"0\n";
        }



    }
}