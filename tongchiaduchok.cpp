#include<iostream>
#include<cmath>

int solve(long long n,long long k)
{
    long long phanNguyen = n/k;
    long long phanDu= n%k;

    long long sumPhanNguyen = (1+ (k-1))*(k-1)/2;
    long long sumPhanDu = (1+ phanDu)*phanDu/2;

    if(k== (sumPhanDu +phanNguyen*sumPhanNguyen))
    {
        return 1;
    }
    return 0;

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
}