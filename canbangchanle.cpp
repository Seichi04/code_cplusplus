#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<algorithm>
void makebasicarray(std::vector<std::string> arr, std::vector<std::string> &a,int n)
{
    int sizearr=arr.size();
    if(n==1) 
    {
        a= arr;
        return;
    }
    if(n==2)
    {
        for(int i=0;i<sizearr;i++)
        {
            for(int j=0;j<sizearr;j++)
            {
                a.push_back(arr[i]+arr[j]);
            }
        }
        return;
    }
    if(n==3)
    {
        for(int i=0;i<sizearr;i++)
        {
            for(int j=0;j<sizearr;j++)
            {
                for(int k=0;k<sizearr;k++)
                {
                    a.push_back(arr[i]+arr[j]+arr[k]);
                }
            }
        }
        return;
    }

    
}
std::set<std::string> permutation(std::string s)
{
    std::set<std::string> temp;
    int n= s.length();
    for(int i=0;i<n;i++)
    {
        temp.insert(s);
        char c= s[0];
        s.erase(0,1);
        s+=c;
    }
    return temp;
}

void completearray(std::vector<std::string> &a)
{
    std::vector<std::string> s;
    while(!a.empty())
    {
        std::set<std::string> temp= permutation(a.front());
        for(std::set<std::string>::iterator it= temp.begin();it!= temp.end();it++ )
        {
            if((*it)[0]!='0')
            {
                s.push_back(*it);
            }
            
        }

        a.erase(a.begin());
    }

    a=s;
}
int main()
{
    int n;
    std::cin>>n;
    
    std::vector<std::string> arr = {"10","30","50","70","90","12","14","16","18","23","25","27","29","34","36","38","45","47","49","56","58","67","69","78","89"};

    std::vector<std::string> a;
    makebasicarray(arr,a,n/2);
    completearray(a);

    std::sort(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        std::cout<<a[i]<<" ";
        if(i%10 == 9) std::cout<<"\n";
    }
}