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

int calcuMax(int pos,std::vector<int> a1,std::vector<int> a2,int n)
{
    int sum1=0,sum2=0,Max=0;
    for(int i=pos;i<n;i++)
    {
        sum1+=a1[i];
        sum2+=a2[i];
        if(sum1==sum2) Max= i-pos+1;
    }

    return Max;
}

void solve(int n)
{
    std::vector<int> a1,a2,ans,A1,A2;
    int sum1=0,sum2=0;
    getin(a1,n,sum1,A1);
    getin(a2,n,sum2,A2);

    int temp= std::min(sum1,sum2);
    int Max=0;
    for(int i=0;i<n;i++)
    {
        Max = std::max(Max,calcuMax(i,a1,a2,n));
    }

    std::cout<<Max<<"\n";

}

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int t;std::cin>>t;
    while(t--)
    {
        int n;
        std::cin>>n;
        solve(n);
    }

}