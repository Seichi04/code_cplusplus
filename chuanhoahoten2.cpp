#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        int kieu;
        std::cin>>kieu;
        std::cin.ignore();
        std::getline(std::cin,s);
        for(int i=0;i<s.size();i++)
        {
            if(i==0 || s[i-1]==' ')
            {
                s[i]=std::toupper(s[i]);
            }
            else
            {
                s[i]=std::tolower(s[i]);
            }
        }

        if(kieu==1)
        {
            size_t pos= s.rfind(' ');
            std::string temp;
            temp.assign(s.begin()+pos+1,s.end());
            s.erase(s.begin()+pos,s.end());
            s=temp +" "+s;
            std::cout<<s<<"\n";
        }
        else
        {
            size_t pos= s.find(' ');
            std::string temp;
            temp.assign(s.begin(),s.begin()+pos);
            s.erase(s.begin(),s.begin()+pos+1);
            s=s +" "+temp;
            std::cout<<s<<"\n";
        }
    }
}