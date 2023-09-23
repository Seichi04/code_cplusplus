#include<iostream>
#include<string>

int main()
{
    std::string s;
    std::getline(std::cin,s);

    std::size_t pos = s.rfind(" ");
    s.insert(s.begin()+pos,',');

    for(int i=0;i<s.size();i++)
    {
        if(i==0 || s[i-1]==' ' || i>=pos) s[i] = std::toupper(s[i]);
        else
        {
            s[i]= std::tolower(s[i]);
        }
    }

    

    std::cout<<s;
}