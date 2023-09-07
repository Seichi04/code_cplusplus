#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
int main()
{
    int t;
    std::cin>>t;
    std::vector<char> key101 = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
    std::vector<char> key102 = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
    while(t--)
    {
        int key;
        std::cin>>key;
        char c;
        std::vector<char> answer;
        for(int i=0;i<15;i++)
        {
            std::cin>>c;
            answer.push_back(c);
        }
        int record=0;
        if(key==101)
        {
            for(int i=0;i<15;i++)
            {
                if(key101[i] == answer[i])
                {
                    record++;
                }
            }
            std::cout<<std::fixed<<std::setprecision(2)<<(float)(record)*10.00/15.00<<"\n";
        }
        else
        {
            for(int i=0;i<15;i++)
            {
                if(key102[i] == answer[i])
                {
                    record++;
                }
            }
            std::cout<<std::fixed<<std::setprecision(2)<<(float)(record)*10.00/15.00<<"\n";
        }
    }
}
