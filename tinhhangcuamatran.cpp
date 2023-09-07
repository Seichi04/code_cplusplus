#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
int UCLN(int a,int b)
{
    if(b==0)
        return a;
    return UCLN(b,a%b);
}

int BCNN(int a,int b)
{
    return a*b/UCLN(a,b);
}

void minus(std::vector<int> a,std::vector<int> &b)
{
    
    int h=0;
    int m=a.size();
    while(a[h]==0 && h<m) h++;
    if(h<m)
    {
        int temp= BCNN(a[h],b[h]);
        int x= temp/ a[h];
        int y= temp/ b[h];

        for(int i=h;i<m;i++)
        {
            b[i] = y*b[i] - x*a[i];;
        }
    }
    
}

bool compare(std::vector<int> a,std::vector<int> b)
{
    int i=0,j=0;
    int m=a.size();
    while(a[i]==0 && i<m) i++;
    while(b[j]==0 && j<m) j++;
    if(i==j) return a[0] < b[0];
    return i<j;
}

void print(std::vector<std::vector<int>> a)
{
    int n= a.size();
    int m=a[0].size();
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) std::cout<<a[i][j]<<" ";
        std::cout<<"\n";
    }
}
void gauss(std::vector<std::vector<int>> &a,int n,int m)
{
    //std::sort(a.begin(),a.end(),compare);

    int mark=1;
    // while(mark<n)
    // {
    //     int h=0;
    //     while(a[mark][h]==0 && h<m) h++;
    //     if(h==m ) break;
        
    //     if(a[mark-1][h-1]!= 0 && h!=0)
    //     {
    //         mark++;
    //         continue;
    //     }
        
           
            for(int i=mark;i<n;i++)
            {
                minus(a[mark-1],a[i]);
            }
    //     print(a);
    //     std::sort(a.begin(),a.end(),compare);
    //     mark++;
    // }
        
        //std::sort(a.begin(),a.end(),compare);
        print(a);

}


void solve(int n,int m)
{
    std::vector<std::vector<int>> a(n,std::vector<int>(m,0));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++) std::cin>>a[i][j];
    }

    gauss(a,n,m);

    // int rank=0;
    // bool flag = true;
    // int i;
    // for(i=0;i<n;i++)
    // {
    //     int h=0;
    //     while(a[i][h]==0 && h<m) h++;
    //     if(h==m)
    //     {
    //         flag= false;
    //         break;
    //     }
    // }
    // if(!flag) std::cout<<i<<"\n";
    // else std::cout<<n<<"\n";
    
    
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
        solve(n,m);
    }
}