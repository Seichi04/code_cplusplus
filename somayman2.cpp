#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
 
bool check(std::string s)
{
    if(s=="9") return true;
    else if(s.size()==1 && s!="9") return false;
    
    int sum=0;
    for(long long i=0;i<s.size();i++)
    {
        sum= sum + (int)s[i] -48;
    }
    return check(std::to_string(sum));
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        if(check(s)) std::cout<<"1\n";
        else std::cout<<"0\n";
        

    }
}