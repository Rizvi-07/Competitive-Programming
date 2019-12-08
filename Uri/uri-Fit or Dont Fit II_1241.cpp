#include<bits/stdc++.h>

using namespace std;
int main()
{
    int tc,p;
    scanf("%d ",&tc);
    for(p=0;p<tc;p++)
    {
        char s1[1000];
        char s2[1000];
        //1000 size bolle string er cheye character neya better
        //gets(s1);
        //gets(s2);
        scanf("%s %s",&s1,&s2);
        int k = strlen(s1)-strlen(s2);
        int i,j=0,flag = 0;
        for(i=k;i<strlen(s1);i++)
        {
            if(s1[i]==s2[j])
             {
                 flag++;
                 //cout<<flag<<endl;
             }
            else
                break;
        j++;
        }
        //cout<<atoi(s1.c_str())<<endl;
        if(flag==strlen(s2))
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    }
}

