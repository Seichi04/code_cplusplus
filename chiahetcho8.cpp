#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

#define MOD 1000;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;
        long long ns=s.size();
        long long count=0;
        for(long long i=0;i<ns;i++)
        {
            long long sum=0;
            long long temp=0;
            for(long long j=i;j<ns;j++)
            {
                sum = ( sum + s[j] - '0')%3;
                temp = (temp*10+ (s[j]-'0'))%MOD;
                if(sum!=0 && temp%8==0 )
                {
                    count++;
                }
            }
        }
        std::cout<<count<<"\n";
    }
}