#include<iostream>
#include<vector>
#include<algorithm>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        std::sort(a.begin(),a.end());
        while(!a.empty())
        {
            std::cout<<a.back()<<" ";
            a.pop_back();
            if(!a.empty())
            {
                std::cout<<a.front()<<" ";
                a.erase(a.begin());
            }
        }
        std::cout<<"\n";
    }
}