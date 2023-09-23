#include<iostream>
#include<string>
#include<sstream>

int main()
{
    std::string s,x;
    std::getline(std::cin,s);
    std::cin>>x;
    std::stringstream ss(s);
    std::string word;
    while(ss>>word)
    {
        if(word != x)
        {
            std::cout<<word<<" ";
        }
    }

}