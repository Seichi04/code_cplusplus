#include<iostream>
#include<string>

int main()
{
    int t;
    std::cin>>t;

    while(t--)
    {

        int n;
        std::cin>>n;
        do
        {
            int temp=0;
            while(n!=0)
            {
                temp+= (n%10);
                n/=10;
            }
            n=temp;
        } while (n>=10);
        
        std::cout<<n<<"\n";

        
    }
}