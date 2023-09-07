#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void buildTree(std::vector<long long> a,std::vector<long long> &tree,long long id,long long left,long long right)
{
    if(left==right)
    {
        tree[id]=a[left];
        return;
    }

    long long mid= (left+right)/2;

    buildTree(a,tree,id*2+1,left,mid);
    buildTree(a,tree,id*2+2,mid+1,right);

    tree[id]= std::max(tree[id*2+1],tree[id*2+2]);
}

long long getVal(std::vector<long long> tree,long long id,long long left,long long right,long long u,long long v)
{
    if(u>right || v<left) return INT_MIN;
    if(left==right) return tree[id];
    int m= (left+right)/2;

    return std::max(getVal(tree,id*2+1,left,m,u,v),getVal(tree,id*2+2,m+1,right,u,v));
}

void solve(int n,int k)
{
    std::vector<long long> a(n,0);
    for(long long i=0;i<n;i++) std::cin>>a[i];
    std::vector<long long> tree(n*4,0);
    std::vector<long long> ans;
    buildTree(a,tree,0,0,n-1);

    for(long long i=0;i<=n-k;i++)
    {
        ans.push_back(getVal(tree,0,0,n-1,i,i+k-1));
    }
    

    for(auto i:ans) std::cout<<i<<" ";
    std::cout<<"\n";
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
        long long n,k;
        std::cin>>n>>k;
        solve(n,k);
    }
    return 0;
}