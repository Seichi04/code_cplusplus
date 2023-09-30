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
        int n;
        std::cin>>n;
        std::vector<int> a(n,0);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }

        std::sort(a.begin(),a.end());
        int l=0,mid= (n-1)/2 +1;
        int count=0;
        for(int i=0;i<a.size();i++)
        {
            if(i%2==0)
            {
                std::cout<<a[l++]<<" ";
            }
            else
            {
                std::cout<<a[mid++]<<" ";
            }
        }
        std::cout<<"\n";
    }
}