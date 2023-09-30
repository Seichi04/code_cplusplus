#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

bool compare(char a,char b)
{
    return a>b;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;

        std::map<char,int> fre;
        for(int i=0;i<s.size();i++)
        {
            fre[s[i]]++;
        }

        std::string ans;
        std::pair<char,int> Max(47,0);
        for(auto i:fre)
        {
            if(i.second%2==0 && i.first!='0')
            {
                ans = ans + std::string(i.second/2,i.first);
            }
            else
            {   
                if((i.second > Max.second || (i.second==Max.second && i.first>Max.first)) && i.first!='0')
                {
                    Max.first= i.first;
                    Max.second= i.second;
                }
            }
        }
        if(!ans.empty() && fre['0'] > fre[Max.first] && fre['0']%2!=0)
        {
            Max.first='0';
            Max.second= fre['0'];
        }
        if((!ans.empty() || (Max.second>1)) && fre['0']%2==0)
        {
            ans = ans+ std::string(fre['0']/2,'0');
        }

        ans= ans + std::string(Max.second/2,Max.first); 
        std::sort(ans.begin(),ans.end(),compare);
        

        std::string temp=ans;
        if(Max.first!= 47)ans.push_back(Max.first);


        std::reverse(temp.begin(),temp.end());


        ans+=temp;
        if(ans.empty()) ans="0";


        std::cout<<ans<<"\n";

    }
}