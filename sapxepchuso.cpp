#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::set<int> ans;
        long long n;
        std::cin>>n;
        for(int i=0;i<n;i++)
        {
            std::string temp;
            std::cin>>temp;
            for(int i=0;i<temp.size();i++)
            {
                ans.insert(temp[i]);
            }
        }

        std::vector<char> result;
        for(std::set<int>::iterator it=ans.begin();it!=ans.end();it++)
        {
            result.push_back(*it);
        }
        std::sort(result.begin(),result.end());
        for(auto i:result)
        {
            std::cout<<i<<" ";
        }
        std::cout<<"\n";
    }
}