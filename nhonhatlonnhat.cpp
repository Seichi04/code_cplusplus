#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>
int main()
{
    int m,s;
    std::cin>>m>>s;
    if(s==0 && m>1)
    {
        std::cout<<"-1 -1";
        return 0;
    }

    std::string min,max;
    std::stringstream ss1;
    for(int i=0;i<m;i++)
    {
        if(s >9)
        {
            ss1<<9;
            s-=9;
        }
        else
        {
            ss1<<s;
            s-=s;
        }
    }
    if(s!=0)
    {
        std::cout<<"-1 -1";
        return 0;
    }
    ss1>>max;

    min=max;
    std::reverse(min.begin(),min.end());
    if(min.front()=='0')
    {
        
        int p=1;
        while(min[p] == '0')
        {
            p++;
        }
        min[0]='1';
        min[p]-=1;    
        
    }
    std::cout<<min<<" "<<max;
}