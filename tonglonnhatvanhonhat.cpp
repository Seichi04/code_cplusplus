#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
void build(std::string a,std::string &s1max,std::string &s1min)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='5')
        {
            s1max.push_back('6');
            s1min.push_back(a[i]);
        }
        else if(a[i]=='6')
        {
            s1max.push_back(a[i]);
            s1min.push_back('5');
        }
        else
        {
            s1max.push_back(a[i]);
            s1min.push_back(a[i]);
        }
    }
}

long long cong(std::string a,std::string b)
{
    // std::string ans;
    // long long i= a.size()-1;
    // long long j= b.size()-1;
    // int nho=0;
    // while(i>=0 || j>=0)
    // {
    //     int sum=0;
    //     if(i>=0)
    //     {
    //         sum= sum+ (int)a[i]-48;
    //         i--;
    //     }
    //     if(j>=0)
    //     {
    //         sum= sum+ (int)b[j]-48;
    //         j--;
    //     }
    //     sum+=nho;
    //     nho=sum/10;
    //     sum%=10;
    //     ans.push_back((char)(sum+48));
    // }
    // if(nho!=0) ans.push_back((char)(nho+48));
    // std::reverse(ans.begin(),ans.end());
    // return ans;
    return stoll(a) + stoll(b);

}
int main()
{
    int t;
    std::cin>>t;;
    while(t--)
    {
        std::string s1max,s1min,s2max,s2min;
        std::string a,b;
        std::cin>>a>>b;
        
        build(a,s1max,s1min);
        build(b,s2max,s2min);

        std::cout<<cong(s1min,s2min)<<" "<<cong(s1max,s2max)<<"\n";

    }
}