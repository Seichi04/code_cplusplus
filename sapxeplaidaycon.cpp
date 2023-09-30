#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;
        std::cin>>n;
        std::vector<long long> a(n,0);
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        long long l=0,r=n-1;
        while(a[l]<=a[l+1])
        {
            l++;
        }
        while(a[r]>=a[r-1])
        {
            r--;
        }
        std::sort(a.begin()+l,a.begin()+r+1);

        long long temp=a[l];
        while(temp < a[l-1] && l!=0)
        {
            l--;
        }

        temp=a[r];
        while(temp> a[r+1] && r!=(n-1))
        {
            r++;
        }
        std::cout<<l+1<<" "<<r+1<<"\n";
    }
}