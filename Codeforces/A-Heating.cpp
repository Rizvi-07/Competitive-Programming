#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100];
    int c,s;
    scanf("%d %d",&c,&s);
    int temp=1,sum,k=0;

    for(int i=0;i<s;i++)
    {
        sum=k;
        for(int j = 1;j<=c;j++)
        {
            a[j] = temp;
            //cout<<a[j]<<endl;
            sum = sum+a[j];
            if(sum==s)
                break;

        }
        k = sum-2;
        if(sum==s)
            break;
        temp++;
    }
    //cout<<sum<<endl;
    for(int i = 1;i<=c;i++){
        cout<<a[i]<<endl;
    }
}
