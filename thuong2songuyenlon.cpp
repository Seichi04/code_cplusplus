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

std::string tong(std::string a,std::string b)
{
    std::string ans;
    long long i= a.size()-1;
    long long j= b.size()-1;
    int nho=0;
    while(i>=0 || j>=0)
    {
        int sum=0;
        if(i>=0)
        {
            sum= sum+ (int)a[i]-48;
            i--;
        }
        if(j>=0)
        {
            sum= sum+ (int)b[j]-48;
            j--;
        }
        sum+=nho;
        nho=sum/10;
        sum%=10;
        ans.push_back((char)(sum+48));
    }
    if(nho!=0) ans.push_back((char)(nho+48));
    std::reverse(ans.begin(),ans.end());
    return ans;
}

std::string nhan(std::string s,int a)
{
    std::string temp;
    int nho=0;
    for(int i=s.size()-1;i>=0;i--)
    {
        int x= ((int)s[i]-48)*a +nho;
        nho= x/10;
        x%=10;
        temp.push_back((char)(x+48));
    }
    if(nho!=0) temp.push_back((char)(nho+48));
    std::reverse(temp.begin(),temp.end());
    return temp;
}


void chia(std::string x,std::string y)
{
    
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string x,y;
        std::cin>>x>>y;


        
    }
}