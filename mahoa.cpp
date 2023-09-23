#include<iostream>
#include<string>
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

        for(int i=0;i<s.size();i++)
        {
            int count=1;
            while(s[i+1]==s[i] && i<s.size())
            {
                count++;
                s.erase(s.begin()+i+1);
            }
            std::cout<<s[i]<<count;
        }
        std::cout<<"\n";
    }
}