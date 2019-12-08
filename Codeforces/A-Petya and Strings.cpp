#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]>=97)
            s1[i]-=32;
        if(s2[i]>=97)
            s2[i]-=32;
    }

    int flag=0;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]<s2[i]){
            cout<<"-1"<<endl;
            flag = 0;
            break;
        }
        else if (s1[i]>s2[i]){
            cout<<"1"<<endl;
            flag = 0;
            break;
        }
        else {
            flag=1;
        }

    }
    if(flag>0)
        cout<<"0"<<endl;
}
