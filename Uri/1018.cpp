#include<stdio.h>

int main()
{
    int a,ans,i;
    int b[3] = {3600,60,1};
    scanf("%d",&a);
    for(i=0;i<3;i++)
    {
        ans = a/b[i];
        printf("%d",ans);
        if(i==2)
            break;
        printf(":");
        a = a%b[i];
    }
    printf("\n");
    return 0;
}
