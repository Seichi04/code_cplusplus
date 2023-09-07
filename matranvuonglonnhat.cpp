#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
int n;
std::vector<int> adj[450];
bool visit[450];
char a[450];

void inp()
{
    int Size=n*n;

    std::fill(visit,visit+Size,false);
    for(int i=0;i<Size;i++) if(!adj[i].empty())adj[i].clear();

    for(int i=0;i<Size;i++)
    {
        std::cin>>a[i];
        if(a[i]=='O')
        {
            if((i%n) !=0)
            {
                adj[i-1].push_back(i);
                if((i/n)!=0) adj[i-n-1].push_back(i);
                if((i/n) <n-1) adj[i+n-1].push_back(i);
            }
            if((i%n)<(n-1))
            {
                adj[i+1].push_back(i);
                if((i/n)!=0) adj[i-n+1].push_back(i);
                if((i/n) < (n-1)) adj[i+n+1].push_back(i);
            }
            if((i/n)!=0) adj[i-n].push_back(i);
            if((i/n)<(n-1)) adj[i+n].push_back(i);
        }
    }
}
void dfs(int u,int &count)
{
    visit[u]=true;
    count++;
    for(int i:adj[u])
    {
        if(!visit[i]) dfs(i,count);
    }
}

int check(int bX,int bY)
{
    if(bX==0 || bY==0 || bX==n-1 || bY==n-1) return 0;
    if(a[(bX+1)*n +(bY-1)]=='O') return 0;

    
    int i=bX,j=bY;
    int Size=0;
    while(a[i*n+j]=='O' && j<n)
    {
        j++;
        Size++;
    }
    if(j==n) return 0;
    
    for(int k=bX;k<bX+Size;k++)
    {
        for(int h=bY;h<bY+Size;h++)
            if(a[k*n+h]!='O') return 0;
    }

    int count=0;
    dfs(bX*n+bY,count);
    if(count == (Size*Size)) return count;
    else return 0;
}

void solve()
{
    inp();
    int record=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i*n +j ]=='O' && !visit[i*n+j])
            {
                int temp = check(i,j);
                if(temp > record) record = temp;
            }
        }
    }
    if(record==0)
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(a[i*n+j]=='X' && a[i*n+j+1]=='X' && a[(i+1)*n+j]=='X' && a[(i+1)*n+j+1]=='X')
                {
                    std::cout<<"2\n";
                    return;
                }
            }
        }
    }
    if(record==0) 
    {
        std::cout<<"1\n";
        return;
    }

    std::cout<<sqrt(record)+2<<"\n";

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        solve();
    }
}