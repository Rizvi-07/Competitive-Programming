#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str,s1,s2,s3;
    int m=0,k=0,l=0,p=0;
    getline(cin,str);
    int a[4]={0};
    for(int i=0;i<str.length();i++){
        if(str[i]=='1'){
            a[1]=a[1]+1;
            //m++;

        }
        else if(str[i]=='2'){
            a[2]=a[2]+1;
            //k++;
        }
        else if(str[i]=='3'){
            a[3]=a[3]+1;
            //l++;
        }
        else
            p++;
    }
    /*//a[1]=m;
    cout<<m<<endl;
    //a[2]=k;
    cout<<k<<endl;
    //a[3]=l;
    cout<<l<<endl;*/
    for(int i=1;i<=3;i++)
    {
        if(a[i]>0)
        {
            for(int j=1;j<=a[i];j++)
            {
                cout<<i;
                if(p!=0)
                    cout<<'+';
                p--;
            }
        }
    }
}
