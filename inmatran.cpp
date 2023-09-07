#include<iostream>
#include<vector>

void duyetXuoi(std::vector<int> v)
{
    for(int i:v)
    {
        std::cout<<i<<' ';
    }
}
void duyetNguoc(std::vector<int> v)
{
    for(int i=v.size()-1;i>=0;i--)
    {
        std::cout<<v[i]<<" ";
    }
}



void solve(int n)
{
    std::vector<int> a[n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            int temp;std::cin>>temp;
            a[i].push_back(temp);
        }
    }

    for(int i=0;i<n;i++)
    {
        if(i%2==0) duyetXuoi(a[i]);
        else duyetNguoc(a[i]);
    }
    std::cout<<'\n';
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