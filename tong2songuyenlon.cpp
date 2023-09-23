#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>

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

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string x,y;
        std::cin>>x>>y;
        std::cout<<tong(x,y)<<"\n";
    }
}