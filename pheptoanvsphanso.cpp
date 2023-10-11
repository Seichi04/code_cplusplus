#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<set>
#include<cmath>
using namespace std;
struct PhanSo
{
    long long tu,mau;
};
long long gcd(long long a,long long b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
void rutgon(PhanSo &t)
{
    long long temp=gcd(t.tu,t.mau);
    t.tu/=temp;
    t.mau/=temp;
}
void process(PhanSo a,PhanSo b)
{
    PhanSo c,d,t;

    long long x= (a.mau*b.mau)/gcd(a.mau,b.mau);
    t.mau= x;
    t.tu= a.tu*(x/a.mau) + b.tu*(x/b.mau);
    rutgon(t);
    c.tu= t.tu * t.tu;
    c.mau= t.mau * t.mau;
    rutgon(c);
    d.tu= a.tu * b.tu * c.tu;
    d.mau= a.mau * b.mau * c.mau;
    rutgon(d);

    cout<<c.tu<<"/"<<c.mau<<" "<<d.tu<<"/"<<d.mau<<"\n";
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}