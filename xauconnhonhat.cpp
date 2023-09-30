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
    std::cin.ignore();
    while(t--)
    {
        std::string s1,s2;
        //std::cin>>s1>>s2;
        std::getline(std::cin,s1);
        std::getline(std::cin,s2);
        
        int ns1= s1.size();
        std::map<char,int> fre1,fre2;

        for(int i=0;i<s2.size();i++)
        {
            fre2[s2[i]]++;
        }

        int l=0,r=0;
        std::pair<std::string,int> min= {"",ns1+3};

        while(r<ns1)
        {
            while(fre2.size() != fre1.size() )
            {
                if(fre2.find(s1[r])!=fre2.end())
                {
                    fre1[s1[r]]++;
                }
                r++;
            }
            
            
            while(fre1.size() == fre2.size() )
            {
                if(fre1==fre2)
                {
                    std::string temp;
                    temp.assign(s1.begin()+l,s1.begin()+r);
                    if(temp.size() < min.second)
                    {
                        min.first= temp;
                        min.second= temp.size();
                    }
                }
                

                if(fre1.find(s1[l])!=fre1.end())
                {
                    fre1[s1[l]]--;
                    if(fre1[s1[l]]==0) fre1.erase(s1[l]);
                }
                l++;
            }
        }
        if(min.second==(ns1+3))
        {
            std::cout<<"-1\n";
        }
        else
        {
            std::cout<<min.first<<"\n";

        }
    }
}