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
        int l=0,r=n-1;
        while(l<r)
        {
            std::cout<<a[r--]<<" "<<a[l++]<<" ";
        }
        if(l==r) std::cout<<a[l];
        std::cout<<"\n";

       
    }
}