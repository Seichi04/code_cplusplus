#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>

#define PI 3.141592653589793238
struct p
{
    double x,y;
};
double distance(p A,p B)
{
    return sqrt((A.x-B.x)*(A.x-B.x) + (A.y-B.y)*(A.y-B.y));
}

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        p A,B,C;
        std::cin>>A.x>>A.y>>B.x>>B.y>>C.x>>C.y;
        double c = distance(A,B) , a= distance(B,C) , b= distance(A,C);
        if(( (a+b)<=c ) || ((a+c)<=b) || ((b+c)<=a))
        {
            std::cout<<"INVALID\n";
            continue;
        }
        double S= 0.25 * sqrt((a+b+c)*(a+b-c)*(a+c-b)*(b+c-a));
        double R= 0.25*a*b*c/S;
        double St= PI * R * R;
        std::cout<<std::fixed<<std::setprecision(3)<<St<<"\n";
    }
}