#include<bits/stdc++.h>

int main()
{
    int w;
    scanf("%d",&w);
    //int x = w/2;
    int y = w - 2;
    if(w%2==0 & y%2==0 & y>0 )
        printf("YES");
    else
        printf("NO");
}
