#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
const int MAX=450;
void inp(std::vector<char> &a,std::vector<int> adj[MAX],int s,int n,int m)
{
    for(int i=0;i<s;i++)
    {
        std::cin>>a[i];

        if(a[i]=='O')
        {
            if((i%m)>0) adj[i-1].push_back(i);
            if((i%m)<(m-1)) adj[i+1].push_back(i);
            if((i/m)>0) adj[i-m].push_back(i);
            if((i/m)<(n-1)) adj[i+m].push_back(i);
        }
    }
}

bool dfs(int u,std::vector<bool> visit,std::vector<int> adj[MAX],int n,int m)
{
    visit[u]=true;
    if(u/m ==0 || u/m ==(n-1) || u%m==0 || u%m==n-1) return false;
    for(int i:adj[u])
    {
        if(!visit[i])
            dfs(i,visit,adj,n,m);
    }
    return true;
}
void fillTrue(int u,std::vector<bool> &visit,std::vector<int> adj[MAX],std::vector<char> &a)
{
    visit[u]= true;
    a[u]='X';
    for(int i:adj[u])
    {
        if(!visit[i])
            fillTrue(i,visit,adj,a);
    }
}
void fillFalse(int u,std::vector<bool> &visit,std::vector<int> adj[MAX])
{
    visit[u]= true;
    for(int i:adj[u])
    {
        if(!visit[i])
            fillFalse(i,visit,adj);
    }
}
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
        int s=n*m;
        std::vector<char> a(s,'O');
        std::vector<int> adj[s];
        std::vector<bool> visit(s,false);
        inp(a,adj,s,n,m);
        
        for(int i=0;i<s;i++)
        {
            if(a[i]=='O' &&(!visit[i]) ) 
            {
                if(dfs(i,visit,adj,n,m))
                    fillTrue(i,visit,adj,a);
                else fillFalse(i,visit,adj);
            }
        }

        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++) std::cout<<a[i*m+j]<<" ";
            std::cout<<"\n";
        }
    }
}