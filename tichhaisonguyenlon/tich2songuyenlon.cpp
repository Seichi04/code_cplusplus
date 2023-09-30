#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>

// lam theo phép nhân bình thường- TLE
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
        std::string s1,s2;
        std::cin>>s1>>s2;
        std::string tich;
        for(int i=s2.size()-1;i>=0;i--)
        {
            std::string temp=nhan(s1,(int)s2[i]-48);
            for(int j=i;j<s2.size()-1;j++)
            {
                temp= temp + "0";
            }
            if(i==(s2.size()-1)) tich=temp;
            else
            {
                tich= tong(tich,temp);
            }
        }
        std::cout<<tich<<"\n";
    }
}