#include<iostream>
#include<vector>
#include<map>


int build(std::vector<int> &tohop,int n)
{
    if(n<=1) return tohop[n]=0;
    else if(n==2) return tohop[n]=1;
    else return tohop[n] = build(tohop,n-1) + n-1;
}


int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,k;
        std::cin>>n>>k;
        std::vector<int> a(n,0);
        std::map<int,int> fre;
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
            fre[a[i]]++;
        }
        int count=0;
        std::vector<int> tohop(1000,0);
        for(int i=0;i<n;i++)
        {
            int x= k-a[i];

            if(x!= a[i] && fre[x]!=0 && fre[a[i]]!=0)
            {
                count= count + fre[x]*fre[a[i]];
                fre[x]=0;
                fre[a[i]]=0;
            }
            if(x== a[i] && fre[a[i]]>1)
            {
                count= count + build(tohop,fre[a[i]]);
                fre[x]=0;
            }
        }
        std::cout<<count<<"\n";

    }
}