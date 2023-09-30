#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

bool compare(const std::string a, const std::string b)
{
    std::string x= a+b,y=b+a;
    return x>y;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        std::vector<std::string> a;
        for(int i=0;i<n;i++)
        {
            std::string temp;
            std::cin>>temp;
            a.push_back(temp);
        }

        std::sort(a.begin(),a.end(),compare);
        for(auto s:a)
        {
            std::cout<<s;
        }
        std::cout<<"\n";
    }
}