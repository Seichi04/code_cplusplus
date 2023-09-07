#include<bits/stdc++.h> 
using namespace std; 
bool check(int n)
{ 
    for(int i=2;i<=sqrt(n);i++)
    { 
        if(n%i==0) return false; 
    } 
    return n>1; 
} 
int main()
{   
    int t;cin>>t; 
    while(t--)
    { 
        int n;cin>>n; 
        int cnt=0; 
        for(int i=2;i<=n/2;i++)
        { 
            if(check(i)==1 && check(n-i)==1)
            { 
                cout<<i<<" "<<n-i<<endl; cnt++; break; 
            } 
        } 
        if(cnt==0) cout<<"-1"<<endl; 
    } 
}