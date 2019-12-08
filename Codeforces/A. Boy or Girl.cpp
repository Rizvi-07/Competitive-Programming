#include<bits/stdc++.h>

using namespace std;

int main()
{
    //string str;
    char str[1000];
    scanf("%s",&str);
    //getline(cin,str);
    int cnt=0,k=0;
    for(int i=0;i<strlen(str);i++)
    {
        for(int j=i;j<strlen(str);j++)
        {
            if(str[i] ==str[j+1] && j+1 !=strlen(str))
            {
                k++;
            }
        }
    }
    if((strlen(str)-k)%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;
}
// zcinitufxoldnokacdvtmdohsfdjepyfioyvclhmujiqwvmudbfjzxjfqqxjmoiyxrfsbvseawwoyynn
