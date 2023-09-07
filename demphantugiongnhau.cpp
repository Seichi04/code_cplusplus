#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
#include<set>

void solve(int n)
{
    int count=0;
    std::set<int> a[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp;
            std::cin>>temp;
            a[i].insert(temp);
        }
    }
    std::set<int>::iterator it;
    for(it=a[0].begin();it!=a[0].end();it++)
    {
        bool flag =true;
        for(int j=1;j<n;j++)
        {
            if(a[j].find(*it) == a[j].end()) 
            {
                flag = false;
                break;            
            } 
        }
        if(flag) 
        {
            count++;
        }
    }

    std::cout<<count<<"\n";
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        solve(n);
    }
}