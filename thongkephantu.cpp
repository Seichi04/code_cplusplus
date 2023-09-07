#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
#include<sstream>
const int MAXLIST = 10000;
struct list
{
    int n;
    std::vector<int> node;
};
list ds;

void cal(std::vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        int count=1;
        for(int j=i+1;j<v.size();)
        {
            if(v[j]==v[i]) 
            {
                count++;
                v.erase(v.begin() +j);
            }
            else
                j++;
        }
        std::cout<<v[i]<<" "<<count<<"\n";
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    //std::cin>>ds.n;
    std::stringstream ss;
    std::string s;
    std::getline(std::cin,s);

    ss<<s;
    int temp;
    while(ss >> temp)
    {
        ds.node.push_back(temp);
    }
    
    cal(ds.node);
    
    
}