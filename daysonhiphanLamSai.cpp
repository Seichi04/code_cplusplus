#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

void getin(std::vector<int> &a,int n,int &sum,std::vector<int> &A)
{
    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin>>temp;
        sum+=temp;
        if(temp==1) A.push_back(i);
        a.push_back(temp);
    }
}

int calcuMax(int value,std::vector<int> A,int n)
{
    int m=A.size();
    if(value==m) return n;
    int Max=0;
    for(int i=0;i+value-1<m;i++)
    {
        int left= (i>0)? (A[i-1]+1) : 0;
        int right= (i+value-1<m-1)? (A[i+value]-1) : (n-1);
        int temp= right-left;
        Max= std::max(Max,temp);
    }
    return Max+1;
}

void solve(int n)
{
    std::vector<int> a1,a2,ans,A1,A2;
    int sum1=0,sum2=0;
    getin(a1,n,sum1,A1);
    getin(a2,n,sum2,A2);

    int temp= std::min(sum1,sum2);
    int Max=0;
    for(int i=0;i<=temp;i++)
    {
        int temp = std::min(calcuMax(i,A1,n),calcuMax(i,A2,n));
        Max= std::max(temp,Max);
    }
    std::cout<<Max<<"\n";

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
        solve(n);
    }
}