#include<iostream>
#include<string>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s1;
        std::cin>>s1;
        int n= s1.length();
        bool flag= true;
        for(int i=0,k=n-1;i<=n/2;i++,k--)
        {
            if( s1[i] != s1[k])
            {
                flag=false;
                break;
            }
        }

        if(flag) std::cout<<"YES\n";
        else std::cout<<"NO\n";
       

    }
}
