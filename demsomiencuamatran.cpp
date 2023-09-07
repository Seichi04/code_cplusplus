#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

int n,m;
std::vector<int> adj[10001];
bool visit[10001];
int a[10001];
void inp()
{
    int Size= n*m;
    std::fill(visit,visit+Size,false);
    for(int i=0;i<Size;i++) adj[i].clear();
    for(int i=0;i<Size;i++)
    {
        std::cin>>a[i];
        if(a[i]==1)
        {
            if((i%m)!=0) 
            {
                adj[i-1].push_back(i);
                if(i/m!=0) adj[i-m-1].push_back(i);
                if(i/m < n-1) adj[i+m-1].push_back(i);
            }
            if((i%m)<(m-1))
            {
                adj[i+1].push_back(i);
                if(i/m!=0) adj[i-m+1].push_back(i);
                if(i/m < n-1) adj[i+m+1].push_back(i);
            }
            if((i/m)!=0)
            {
                adj[i-m].push_back(i);
            }
            if((i/m)< (n-1)) 
            {
                adj[i+m].push_back(i);
            }
        }
    }
    
}

void dfs(int u)
{
    visit[u]=true;
    for(int i:adj[u])
    {
        if(!visit[i])
            dfs(i);
    }
}
void solve()
{
    inp();
    int count=0;
    int Size=n*m;
    for(int i=0;i<Size;i++)
    {
        if(a[i]==1 && !visit[i]) 
        {
            dfs(i);
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
        std::cin>>n>>m;
        solve();
    }
}