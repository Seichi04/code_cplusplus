#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,k;
        std::cin>>n>>k;
        
        std::vector<long long> a(n,0);

        std::vector<long long> b;
        for(long long i=0;i<n;i++)
        {
            std::cin>>a[i];
            if(a[i]<=k) b.push_back(i);
        }
        int Max=0;
        for(int i=0;i<b.size();i++)
        {
            int j=i;
            while((b[j]-b[i]+1) <= b.size() && j<b.size())
            {
                j++;
            }
            Max= std::max(j-i,Max);
        }
        std::cout<<b.size()-Max<<"\n";

    }
}