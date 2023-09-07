#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
#include<list>
int count;
void merge(std::vector<int> &a,int pos1,int pos2)
{
    a[pos1]+=a[pos2];
    a.erase(a.begin()+pos2);
    count++;
}


void print(std::vector<int> a)
{
    for(int k:a) std::cout<<k<<" ";
    std::cout<<'\n';
}

void solve(int n)
{
    std::vector<int> a;
    count=0;
    for(int i=0;i<n;i++)
    {
        int temp;
        std::cin>>temp;
        a.push_back(temp);
    }
    
    int l=0,r=a.size()-1;
    while(l<r)
    {
        if(a[l]==a[r])
        {
            l++;r--;
        }
        else if(a[l]<a[r])
        {
            merge(a,l,l+1);
            r--;
        }
        else
        {
            merge(a,r-1,r);
            r--;
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
        int n;
        std::cin>>n;
        solve(n);
    }
}