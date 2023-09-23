#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>

std::string hieu(std::string x,std::string y)
{
    std::string ans;
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
        if(y.size() > x.size() || (y.size()==x.size() && y[0]>x[0]))
        {
            std::swap(x,y);
        }
        std::cout<<hieu(x,y)<<"\n";
    }
}