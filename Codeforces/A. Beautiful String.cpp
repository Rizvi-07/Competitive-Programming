#include<bits/stdc++.h>

using namespace std;

int main()
{
    int tc;
    scanf("%d ",&tc);
    for(int i=0;i<tc;i++)
    {
        char str[100000];
        string a="aa",b="bb",c="cc";
        scanf("%s",&str);
        int k, cnt=0;
        for(int i=0;i<strlen(str);i++)
        {
            for(int j = 0;j<strlen(str);j++)
            {
                if(str[j]=='?')
                {

                if(str[j+1]=='?'){
                        cnt++;
                if((str[j-cnt]=='a' && str[j+cnt]=='b') || (str[j-cnt]=='b' && str[j+cnt]=='a'))
                    str[j] = 'c';
                if((str[j-cnt]=='a' && str[j+cnt]=='c') || (str[j-cnt]=='c' && str[j+cnt]=='a'))
                    str[j] = 'b';
                if((str[j-cnt]=='b' && str[j+cnt]=='c') || (str[j-cnt]=='c' && str[j+cnt]=='b'))
                    str[j] = 'a';
                }
                if((str[j-1]=='a' && str[j+1]=='b') || (str[j-1]=='b' && str[j+1]=='a'))
                    str[j] = 'c';
                if((str[j-1]=='a' && str[j+1]=='c') || (str[j-1]=='c' && str[j+1]=='a'))
                    str[j] = 'b';
                if((str[j-1]=='b' && str[j+1]=='c') || (str[j-1]=='c' && str[j+1]=='b'))
                    str[j] = 'a';
            }
            }
            //cnt = 0;

        }
        cout<<str<<endl;
    }


}
