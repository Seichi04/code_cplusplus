#include<iostream>
#include<cmath>
#include<iomanip>


int main()
{
    int n;
    double sum=0;
    std::cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum += (double)(1/(double)i);
    }

    std::cout<<std::fixed<<std::setprecision(4)<<sum;
}