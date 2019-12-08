#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[6][6],k=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==1)
            {
                k = abs(3-i)+abs(3-j);
            }

        }
    }
    cout<<k<<endl;
}
/*
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
*/
