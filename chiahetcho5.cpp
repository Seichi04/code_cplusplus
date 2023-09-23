#include<iostream>
#include<string>
#include<vector>
int build(std::vector<int> &a,int n)
{
    if(n==0) return a[n]=1;
    else return a[n]= (build(a,n-1)*2)%10;
}


int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s;
        std::cin>>s;

        std::vector<int> a(s.size()+1,0);

        int temp = build(a,s.size());

        int sum=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] =='1')
            {
                sum= (sum + a[s.size()-i]) %10;
            }
        }

        if(sum%5==0)
        {
            std::cout<<"Yes\n";
        }
        else
        {
            std::cout<<"No\n";
        }
        
    }
}