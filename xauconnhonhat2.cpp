#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s1;
        std::cin>>s1;
        int ns1=s1.size();

        std::set<char> a1,a2;
        for(auto c:s1)
        {
            a2.insert(c);
        }
        std::string ans(s1.size(),'0');
        for(int i=0;i<ns1;i++)
        {
            for(int j=i;j<ns1;j++)
            {
                if(a2.count(s1[j])!=0)
                {
                    a1.insert(s1[j]);
                }
                if(a1.size()==a2.size())
                {
                    if(j-i+1 < ans.size())
                    {
                        ans.assign(s1.begin()+i,s1.begin()+j+1);
                    }
                    a1.clear();
                    break;
                }
                if(j==(ns1-1)) a1.clear();
            }
        }
        std::cout<<ans.size()<<"\n";


        
    }
}