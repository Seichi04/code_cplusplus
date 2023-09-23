#include<iostream>
#include<string>
int main()
{
    std::string s;
    std::getline(std::cin,s);

    std::string email;

    std::size_t pos = s.rfind(" ");
    email.assign(s.begin()+pos+1,s.end());

    for(int i=0;i<pos;i++)
    {
        if(i==0 || s[i-1]==' ') email.push_back(s[i]);
    }

    for(int i=0;i<email.size();i++)
    {
        email[i]= std::tolower(email[i]);
    }
    email= email + "@ptit.edu.vn";
    std::cout<<email;
}