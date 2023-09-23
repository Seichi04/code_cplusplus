#include<iostream>
#include<string>
#include<sstream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::cin.ignore();
        std::string s;
        std::getline(std::cin,s);

        std::stringstream ss;
        ss<<s;

        std::string word;
        int count=0;
        while(ss>>word)
        {
            count++;
        }
        std::cout<<count<<"\n";


    }
}