#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<sstream>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        for(long long i=0;i<s.size();i++)
        {
            if(s[i]<'0' || s[i]>'9')
            {
                if((s[i-1]>='0' && s[i-1]<='9') || i==0)
                {
                    s[i]=' ';
                }
                else if(s[i-1]==' ')
                {
                    s.erase(s.begin()+i);
                    i--;
                }
            }
            
        }
        std::stringstream ss(s);
        int sum=0;
        int num;
        while(ss>>num)
        {
            sum+=num;
        }
        std::cout<<sum<<"\n";
    }
}