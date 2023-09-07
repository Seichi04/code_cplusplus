#include<iostream>
#include<cctype>

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        char c;
        std::cin>>c;

        if( islower(c))
        {
            c= toupper(c);
        }
        else
        {
            c= tolower(c);
        }
        std::cout<<c<<'\n';
    }
    return 0;
}