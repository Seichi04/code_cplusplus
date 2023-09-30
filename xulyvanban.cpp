#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>


int main()
{
    std::string s;
    std::string temp;
    std::vector<std::string> v;

    while(std::cin>>temp)
    {
        for(int i=0;i<temp.size();i++)
        {
            temp[i]= std::tolower(temp[i]);
        }
        if(s.empty()) 
        {
            temp[0]= std::toupper(temp[0]);
            s= temp;
        }
        else
        {
            s= s +" "+ temp;
        }
        
        if(s.back()=='.' || s.back()=='!' || s.back()=='?')
        {
            s.pop_back();
            v.push_back(s);
            s.clear();
        }
    }

    for(int i=0;i<v.size();i++)
    {
        std::cout<<v[i]<<"\n";
    }

    
}