#include<iostream>
#include<string>
void mod(std::string &x)
{
    int a= std::stoi(x) %11;
    x= std::to_string(a);
}


int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s,x;
        std::cin>>s;
        while(!s.empty())
        {
            x.push_back(s.front());
            s.erase(s.begin());
            mod(x);

        }
        if(x=="0")
        {
            std::cout<<"1\n";
        }
        else
        {
            std::cout<<"0\n";
        }
    }
}