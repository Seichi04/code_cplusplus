#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
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

std::string karatsuma(std::string a,std::string b)
{
    long long m= std::max(a.size(),b.size());

    while(a.size() < m)
    {
        a.insert(a.begin(),'0');
    }
    while(b.size() < m)
    {
        b.insert(b.begin(),'0');
    }

    if(m==1)
    {
        return std::to_string( (a[0]-'0') * (b[0]-'0') );
    }

    long long m2= floor(m/2);
    std::string low_a,low_b,high_a,high_b;
    high_a.assign(a.begin(),a.begin()+m2);
    low_a.assign(a.begin()+m2,a.end());
    high_b.assign(b.begin(),b.begin()+m2);
    low_b.assign(b.begin()+m2,b.end());

    std::string z2= karatsuma(high_a,high_b);
    std::string z0= karatsuma(low_a,low_b);

    std::string z1= hieu(karatsuma(tong(high_a,low_a),tong(high_b,low_b)),tong(z2,z0));

    return tong(z2+ std::string(((m-m2)*2),'0'),tong(z1+std::string(m-m2,'0'),z0));

    //return a;

}



int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s1,s2;
        std::cin>>s1>>s2;
        std::string tich = karatsuma(s1,s2);

        while(tich.front()=='0')
        {
            tich.erase(tich.begin());
        }

        std::cout<<tich<<'\n';
        
    }
}