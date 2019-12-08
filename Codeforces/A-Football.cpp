#include<bits/stdc++.h>

using namespace std;
/*int main()
{
    string str;
    getline(cin,str);
    int cnt=0,cnt1=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='1'){
            cnt++;
            if(cnt==7)
                break;
            cnt1=0;

        }
        else {
            cnt1++;
            if(cnt1==7)
                break;
            cnt=0;

        }
    }
    if(cnt>=7||cnt1>=7)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}*/

int main()
{
    string str,s1,s2;
    getline(cin,str);
    s1 = "1111111";
    s2 = "0000000";
    if(strstr(str.c_str(),s1.c_str()))//str er moddhe s1 ta search kortese
    {
        cout << "YES"<<endl;
    }
    else if(strstr(str.c_str(),s2.c_str()))
   {
        cout << "YES"<<endl;
   }
   else
        cout<<"NO"<<endl;
}
