#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>

//OUT TIME
int cal(std::vector<std::vector<int>> a,int i,int j)
{
    int size= std::min(i+1,j+1);
    int temp=size;
    int sum=0;
    int x=i,y=j,h=i-size+1,k=j;
    while(temp--)
    {
        sum = sum+ a[i][j]  - a[h][k];
        i--;j--;
        h++;k--;
    }
    return sum;

}
int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    std::cout.tie(0);

    int n;
    std::cin>>n;
    std::vector<std::vector<int>> a(n,std::vector<int>(n,0));
    int record=0;

    
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            std::cin>>a[i][j];
            record = std::max(record,cal(a,i,j));
        }
    std::cout<<record<<"\n";
    //std::cout<<cal(a,1,1);
    
}