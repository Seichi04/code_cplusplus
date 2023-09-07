#include<iostream>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<vector>
#include<string>

long long solve(long long n,long long k)
{
    int result= n/k;
    int du= n%k;

    int sum = (1+ (k-1))*(k-1) /2;
    int sumdu= (1+du)*(du)/2;
    return result*sum + sumdu;
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
        long long n,k;
        std::cin>>n>>k;
        std::cout<<solve(n,k)<<std::endl;
    }
    return 0;
}
