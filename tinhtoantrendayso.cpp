#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>
#include<climits>
const long long MOD = 1e9 +7;
long long UCLN(long long a,long long b)
{
    if(b==0)
        return a;
    return UCLN(b,a%b);
}

void solve(int n)
{

    long long tich=1;
    long long ucln;

    for(int i=0;i<n;i++)
    {
        long long temp;
        std::cin>>temp;
        tich= (tich* temp) % MOD;
        
        if(i==0) ucln= temp;
        else ucln= UCLN(ucln,temp);
    }
    // long long ans= (long long)(std::pow(tich,ucln)) % MOD;
    // std::cout<<ans<<"\n";

    long long ans = 1;
    while (ucln > 0)
    {
        if (ucln % 2 == 1)
        {
            ans = (ans * tich) % MOD;
        }
        tich = (tich * tich) % MOD;
        ucln = ucln / 2;
    }

    std::cout << ans << "\n";

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
    return 0;
}