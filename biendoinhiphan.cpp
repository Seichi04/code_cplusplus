#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
void solve(int n,int m)
{
    std::vector<int> a[n];
    std::set<int> cot,hang;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            int temp;
            std::cin>>temp;
            a[i].push_back(temp);
            if(temp==1)
            {
                cot.insert(j);
                hang.insert(i);
            }
        }
    }

    for(int i:hang)
    {
        std::fill(a[i].begin(),a[i].end(),1);
    }

    for(int i:cot)
    {
        for(int j=0;j<n;j++)
        {
            a[j][i]=1;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j:a[i])
        {
            std::cout<<j<<" ";
        }
        std::cout<<"\n";
    }

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
        int n,m;
        std::cin>>n>>m;

        solve(n,m);
    }
}