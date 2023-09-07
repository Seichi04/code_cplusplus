#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void buildTree(std::vector<long long> &v,std::vector<long long> &tree,long long l,long long h,long long pos )
{
    if(l==h)
    {
        tree[pos] = v[l];
        return;
    }

    long long m = (l+h)/2;
    buildTree(v,tree,l,m,2*pos+1);
    buildTree(v,tree,m+1,h,2*pos+2);

    tree[pos] = tree[2*pos+1] + tree[2*pos+2];

}

long long query(std::vector<long long> &tree,long long l,long long h,long long b,long long e,long long pos)
{
    if(b<= l && e>= h)
    {
        return tree[pos];
    }
    if( b>h || e< l) return 0;

    long long m = (l + h)/2;
    long long leftSum = query(tree,l,m,b,e,2*pos+1);
    long long rightSum = query(tree,m+1,h,b,e,2*pos+2);

    return leftSum + rightSum;
    
}

void solve(long long n,long long q)
{
    std::vector<long long> v;
    for(long long i=0;i<n;i++)
    {
        long long temp;
        std::cin>>temp;
        v.push_back(temp);
    }

    std::vector<long long> tree(n*4,0);
    buildTree(v,tree,0,n-1,0);
    for(long long i=0;i<q;i++)
    {
        long long b,e;
        std::cin>>b>>e;
        std::cout<<query(tree,0,n-1,b-1,e-1,0)<<std::endl;
    }
}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);
    int t;std::cin>>t;
    while(t--)
    {
        long long n,q;std::cin>>n>>q;
        solve(n,q);
    }
}