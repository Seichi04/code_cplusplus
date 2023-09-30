#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>

int main()
{
        int n,k,b;
        std::cin>>n>>k>>b;

        std::vector<int> a(n,1);

        for(int i=0;i<b;i++)
        {
            int x;
            std::cin>>x;
            a[x-1]=0;
        }

        int Max=0;
        std::vector<int> temp(k,0);
        for(int i=0;i<k;i++)
        {
            if(a[i]==1)
            {
                Max++;
            }
            temp[i]=a[i];
               
        }
        int ans=Max;
        for(int i=k;i<n;i++)
        {
            if(a[i]==1)
            {
                if(temp.front()==1)
                {
                    temp.erase(temp.begin());
                    temp.push_back(a[i]);
                }
                else
                {
                    Max++;
                    temp.erase(temp.begin());
                    temp.push_back(a[i]);
                }
            }
            else
            {
                if(temp.front()==1)
                {
                    Max--;
                    temp.erase(temp.begin());
                    temp.push_back(a[i]);
                }
                else
                {
                    temp.erase(temp.begin());
                    temp.push_back(a[i]);
                }
            }
            ans= std::max(Max,ans);
        }
        std::cout<<k-ans<<"\n";
        
}