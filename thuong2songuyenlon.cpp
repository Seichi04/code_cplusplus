#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>
int toInt(char a)
{
    return (int)a-48;
}


std::string hieu(std::string x,std::string y)
{
    std::string ans;
    
    while(x.front()=='0')
    {
        x.erase(x.begin());
    }
    if(x.empty()) x="0";
    
    if(x=="0"  ) return ans="0";
    if((x.size() == y.size() && x<y )  || x.size() < y.size()) return ans=x;


    int i=x.size()-1,j=y.size()-1;

    int nho=0;
    while(i>=0)
    {
        if(j>=0)
        {
            if((int)x[i]>=((int)y[j]+nho))
            {
                ans.push_back((char)((int)x[i]-(int)y[j]-nho +48));
                nho=0;
            }
            else
            {
                ans.push_back((char)((int)x[i]+10-(int)y[j]-nho +48));
                nho=1;
            }
            i--;j--;
        }
        else
        {
            if(((int)x[i]-48)>=(nho))
            {
                ans.push_back((char)((int)x[i]-nho));
                nho=0;
            }
            else
            {
                ans.push_back((char)((int)x[i]+10-nho));
                nho=1;
            }
            i--;
        }
    }
    std::reverse(ans.begin(),ans.end());
    while(ans.front()=='0')
    {
        ans.erase(ans.begin());
    }
    if(ans.empty()) ans="0";
    return ans;
}

bool compareGreater(std::string a,std::string b)
{
    if(a.size()!=b.size())
    {
        return a.size() > b.size();
    }
    else
    {
        return a>b;
    }
}

std::string chia(std::string x,std::string y)
{
    if(((x!=y) && !compareGreater(x,y))) return "0";
    long long nx=x.size(),ny=y.size();
    std::string ans;

    int idx=0;
    std::string temp;

    while(x.size() >= idx)
    {
        int count=0;
        
        while(temp.front()=='0')
        {
            temp.erase(temp.begin());
        }
        if(temp.empty()) temp="0";

        while(temp==y || compareGreater(temp,y))
        {
            count++;
            temp = hieu(temp,y);
        }
        ans.push_back(count + '0');

        if(idx == x.size()) break;
        while( !(temp == y) && !compareGreater(temp,y) )
        {
            temp= temp + x[idx++];
        }
    }
    while(ans.front()=='0')
    {
        ans.erase(ans.begin());
    }
    if(ans.empty()) ans="0";
    return ans;
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string x,y;
        std::cin>>x>>y;

        std::cout<<chia(x,y)<<"\n";
        
    }
}