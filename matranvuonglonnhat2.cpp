#include<iostream>
#include<utility>
#include<vector>
#include<cmath>


void getinp(std::vector<std::vector<char>> &a,std::vector<std::vector<std::vector<std::pair<int,int>>>> &adj,int n)
{
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cin>>a[i][j];
            if(a[i][j]=='O')
            {
                if(i!=0)
                {
                    if(j!=0 && a[i-1][j-1]=='O') adj[i-1][j-1].push_back({i,j});
                    if(j!=(n-1) && a[i-1][j+1]=='O') adj[i-1][j+1].push_back({i,j});
                    if(a[i-1][j]=='O')adj[i-1][j].push_back({i,j});
                }
                if(i!=(n-1))
                {
                    if(j!=0 && a[i+1][j-1]=='O') adj[i+1][j-1].push_back({i,j});
                    if(j!=(n-1) && a[i+1][j+1]=='O') adj[i+1][j+1].push_back({i,j});
                    if(a[i+1][j]=='O')adj[i+1][j].push_back({i,j});
                }
                if(j!=0 && a[i][j-1]=='O') adj[i][j-1].push_back({i,j});
                if(j!=(n-1) && a[i][j+1]=='O') adj[i][j+1].push_back({i,j});
            }
        }
    }

}

void dfs(std::vector<std::vector<std::vector<std::pair<int,int>>>> adj,std::vector<std::vector<bool>> &visit,std::pair<int,int> u,int n,int &count,bool &flagCheckEdge)
{
    if(u.first==0 || u.first==(n-1) || u.second==0 || u.second==(n-1))
    {
        flagCheckEdge=true;
    }

    visit[u.first][u.second]=true;
    count++;

    for(auto i:adj[u.first][u.second])
    {
        if(!visit[i.first][i.second])
        {
            dfs(adj,visit,i,n,count,flagCheckEdge);
        }
    }
}

int check(std::vector<std::vector<char>> a,std::vector<std::vector<std::vector<std::pair<int,int>>>> adj,std::vector<std::vector<bool>> &visit,int n,std::pair<int,int> u)
{
    bool flagCheckEgde=false;
    int count=0;
    dfs(adj,visit,u,n,count,flagCheckEgde);
    if(flagCheckEgde) return 0;
    int i=u.first,j=u.second,Size=0;
    while(i<n)
    {
        if(a[i][j]=='O')
        {
            Size++;i++;
            break;
        }
    }
    if(i==n) return 0;

    for(int h=u.first; h< u.first + Size; h++)
    {
        for(int k= u.second; k< u.second + Size; k++)
        {
            if(a[h][k]!='O') return 0;
        }
    }

    if((Size*Size)==count) return count;
    return 0;

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
        int n;
        std::cin>>n;
        std::vector<std::vector<char>> a(n,std::vector<char>(n,'O'));
        std::vector<std::vector<bool>> visit(n,std::vector<bool>(n,false));
        std::vector<std::vector<std::vector<std::pair<int,int>>>> adj(n,std::vector<std::vector<std::pair<int,int>>>(n));

        getinp(a,adj,n);
        
        int record=0;
        bool check2x2= false;
        bool check1x1= false;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<(n-1) && j<(n-1))
                {
                    if(a[i][j]=='X' && a[i][j+1]=='X' && a[i+1][j]=='X' && a[i+1][j+1]=='X') check2x2 = true;
                }
                if(a[i][j]=='X') true;
                if(!visit[i][j] && a[i][j]=='O')
                {
                    int local=check(a,adj,visit,n,{i,j});
                    record = std::max(record,local);
                }
            }
        }
        int canh=0;
        if(record==0)
        {
            if(check2x2)
            {
                canh=2;
            }
            else if(check1x1)
            {
                canh=1;
            }
        }
        else
        {
            canh = sqrt(record) +2;
        }
        std::cout<<canh<<"\n";
        

    }
}