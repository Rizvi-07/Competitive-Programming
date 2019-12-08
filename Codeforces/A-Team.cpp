#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p[3];
    scanf("%d",&n);
    int a,b,c,cnt=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        p[0]=a;
        p[1]=b;
        p[2]=c;
        int k=0;
        for(int j=0;j<3;j++)
        {
            if(p[j]==1)
                k++;
        }
        if(k>=2)
            cnt++;

    }
    cout<<cnt<<endl;
}
