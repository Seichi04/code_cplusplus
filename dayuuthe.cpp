#include<iostream>
#include<string>
#include<sstream>
int main()
{
    int t;
    std::cin>>t;
    std::cin.ignore();
    while(t--)
    {
        std::string s;
        std::getline(std::cin,s);

        std::stringstream ss(s);
        long long temp;
        long long counteven=0,countodd=0;

        while(ss>>temp)
        {
            if(temp%2==0) counteven++;
            else countodd++;
        }

        if((counteven+countodd)%2==0 && counteven > countodd)
        {
            std::cout<<"YES\n";
        }
        else if((counteven+countodd)%2!=0 && counteven < countodd)
        {
            std::cout<<"YES\n";
        }
        else
        {
            std::cout<<"NO\n";
        }

    }
}