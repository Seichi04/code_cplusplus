#include<iostream>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n;std::cin>>n;

        std::cout<<(1+n)*n/2<<"\n";
    }
    return 0;
}