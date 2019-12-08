#include<stdio.h>

int main()
{
    int i,a,b;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&b);
        if(b%2==1||b%2==-1&&b>0)
            printf("ODD POSITIVE\n");
        else if(b%2==1||b%2==-1&&b<0)
            printf("ODD NEGATIVE\n");
        else if(b%2==0&&b>0)
            printf("EVEN POSITIVE\n");
        else if(b%2==0&&b<0)
            printf("EVEN NEGATIVE\n");
        else
            printf("NULL\n");
    }
    return 0;
}
