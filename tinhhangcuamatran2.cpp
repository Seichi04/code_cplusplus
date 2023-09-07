#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>




int main()
{
    // std::ios_base::sync_with_stdio(false);
    // std::cin.tie(0);
    // std::cout.tie(0);

    int t;
    std::cin>>t;
    while(t--)
    {
        int n,m;
        std::cin>>n>>m;
        std::vector<std::vector<int>> a(n,std::vector<int>(m,0));

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++) std::cin>>a[i][j];

        int i=0,j=0;
        int k,t,rank,save;

        while(i<n && j<m)
        {
            if(a[i][j]==0)
            {
                for(t=i+1;t<n;t++)
                {
                    if(a[t][j]!=0)
                    {
                        for(k=i;k<m;k++)
                        {
                            std::swap(a[t][k],a[i][k]);
                        }
                        break;
                    }
                    
                }
                if(t==n) j++;
            }
            if(a[i][j]!=0)
            {
                for(t=i+1;t<n;t++)
                {
                    if(a[t][j]!=0)
                    {
                        save= a[t][j];
                        for(k=j;k<m;k++)
                            a[t][k]= a[t][k] - a[i][k]*save/a[i][j];
                    }
                }
                i++;j++;
            }
        }
        rank=n;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i][j]!=0) break;
            }
            if(j==m) rank--;
        }
        std::cout<<rank<<"\n";
        
    }

}