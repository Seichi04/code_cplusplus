#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>






int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        long long n;std::cin>>n;
        std::vector<long long> a(n,0);
        for(long long i=0;i<n;i++) std::cin>>a[i];

        std::sort(a.begin(),a.end());

        long long d= a.back()-a.front();
        std::vector<long long> ans;
        for(long long i=1;i<=sqrt(d);i++)
        {
            if(d%i==0)
            {
                ans.push_back(i);
                if(i != (d/i)) ans.push_back(d/i);
            }
        }
        int count=0;
        for(long long i=0;i<ans.size();i++)
        {
            bool flag = true;
            int m= a[0]%ans[i];
            for(int j=1;j<n;j++)
            {
                if(a[j]%ans[i] != m)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) count++;
        }
        std::cout<<count<<"\n";

    }
}