#include<iostream>
#include<string>

int main()
{
    std::string s;
    std::cin>>s;

    for(int i=0;i<s.size();i++)
    {
        s[i]= std::tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='y')
        {
            s.erase(s.begin()+i);
            i--;
        }
        else
        {
            std::cout<<"."<<s[i];        }
    }
}