#include<iostream>
struct PhanSo
{
    long long tu,mau;
};
void nhap(PhanSo &a)
{
    std::cin>>a.tu>>a.mau;
}
void in(PhanSo t)
{
    std::cout<<t.tu<<"/"<<t.mau;
}
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
PhanSo tong(PhanSo a,PhanSo b)
{
    long long x= (a.mau*b.mau)/gcd(a.mau,b.mau);
    PhanSo t;
    t.mau= x;
    t.tu= a.tu*(x/a.mau) + b.tu*(x/b.mau);
    long long temp=gcd(t.tu,t.mau);
    t.tu/=temp;
    t.mau/=temp;
    return t;
}
int main() {
	struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}