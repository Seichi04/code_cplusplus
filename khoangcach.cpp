#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        double xA,yA,xB,yB;
        std::cin>>xA>>yA>>xB>>yB;

        double kc= sqrt((double)pow((xA-xB),2) + (double)pow((yA-yB),2));
        std::cout<<std::fixed<<std::setprecision(4)<<kc<<"\n";
    }

    
}