#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

#define optimize() std::ios_base::sync_with_stdio(false);std::cin.tie(0);std::cout.tie(0);

//TLE;


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
    optimize();
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string a;
        std::string b;
        std::cin>>a>>b;

        std::reverse(a.begin(),a.end());
        std::reverse(b.begin(),b.end());
        long long n=a.size(),m=b.size();
        //std::vector<std::vector<std::string>> v(n+1,std::vector<std::string>(m+1,0));

        std::string ans="0";

        for(long long i=0;i<n;i++)
        {
            for(long long j=0;j<m;j++)
            {
                long long result = (a[i]-48)*(b[j]-48);
                //v[i][j] = std::to_string(result);
                std::string s = std::to_string(result);
                for(int k=0;k<(i+j);k++)
                {
                    s+="0";
                }
                ans= tong(ans,s);
            }
        }
        std::cout<<ans<<"\n";
    }
}