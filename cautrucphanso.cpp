#include<iostream>
#include<iomanip>
struct PhanSo
{
    long long Tu;
    long long Mau;
};

long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
    
}

void nhap(PhanSo &p)
{
    std::cin>>p.Tu>>p.Mau;
}
void rutgon(PhanSo &p)
{
    long long x=gcd(p.Tu,p.Mau);
    p.Tu/=x;
    p.Mau/=x;
}
void in(PhanSo p)
{
    std::cout<<p.Tu<<"/"<<p.Mau;
}
int main() {
	struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}