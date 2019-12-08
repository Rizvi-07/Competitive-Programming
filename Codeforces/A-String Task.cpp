#include<bits/stdc++.h>
using namespace std;

int main()
{
    //string str , s2 ;
    //getline(cin,str);
    char str[100];
    //scanf("%[^\n]%*c", str);
    gets(str);
    string s2;
    int j = 0;
	for(int i =0;i<strlen(str);i++)
    {
		if(str[i]!='a' && str[i]!='e' && str[i]!='i' &&
		str[i]!='o' && str[i]!='u' && str[i]!= 'y' && str[i]!='A' &&
		str[i]!='E' && str[i]!='I' && str[i]!='O' &&
		str[i]!='U' && str[i]!= 'Y')
        {
            s2[j] = str[i];
            cout<<".";
            //printf(".");
            if(s2[j] >= 'A' && s2[j] <= 'Z')
            {
                s2[j] = s2[j]+32;
                cout<<s2[j];
                //printf("%c",s2[j]);
            }
            else
                //printf("%c",s2[j]);
                cout<<s2[j];

            j++;

        }
    }
    cout<<endl;
}
