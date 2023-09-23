#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
char check(char c)
{
    switch(c)
    {
        case 'A': return '2';
        case 'B': return '2';
        case 'C': return '2';
        case 'D': return '3';
        case 'E': return '3';
        case 'F': return '3';
        case 'G': return '4';
        case 'H': return '4';
        case 'I': return '4';
        case 'J': return '5';
        case 'K': return '5';
        case 'L': return '5';
        case 'M': return '6';
        case 'N': return '6';
        case 'O': return '6';
        case 'P': return '7';
        case 'Q': return '7';
        case 'R': return '7';
        case 'S': return '7';
        case 'T': return '8';
        case 'U': return '8';
        case 'V': return '8';
        case 'W': return '9';
        case 'X': return '9';
        case 'Y': return '9';
        case 'Z': return '9';
        default: return '0';
    }
}


int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        std::string s1,s2;
        std::cin>>s1;
        for(int i=0;i<s1.size();i++)
        {
            s2.push_back(check(std::toupper(s1[i])));
        }
        std::string s3=s2;
        std::reverse(s3.begin(),s3.end());
        if(s3==s2) std::cout<<"YES\n";
        else std::cout<<"NO\n";
    }
}