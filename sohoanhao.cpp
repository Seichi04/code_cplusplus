#include<iostream>
#include<cmath>

bool check(long long n)
{
	if(n<=1) return false;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i == 0) return false;
	}
	return true;
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
        long long n;
        std::cin>>n;
        if(n%2 != 0 || (float)log2(n)==(long long)log2(n)) 
        {
        	std::cout<<"0\n";
        	continue;
		}
        long long count=ceil(log2(n));
       	long long x= (count-1)/2;
       	if(pow(2,x)*(pow(2,x+1)-1)  != n)
	    {
	      	std::cout<<"0\n";
	       	continue;	
		}
       	if(check(pow(2,x+1)-1))
       	{
       		std::cout<<"1\n";
		}
		else std::cout<<"0\n";
	}
}