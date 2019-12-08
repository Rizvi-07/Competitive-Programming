#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
        if(a>b)
        {
            if(b<c)
            {
                if(a<c)
                printf("%d\n%d\n%d\n\n",b,a,c);
                else
                printf("%d\n%d\n%d\n\n",b,c,a);
            }
            else
                printf("%d\n%d\n%d\n\n",c,b,a);

        }
        else if(a<b)
        {
            if(b>c)
            {
                if(a>c)
                printf("%d\n%d\n%d\n\n",c,a,b);
                else
                printf("%d\n%d\n%d\n\n",a,c,b);
            }
            else
                printf("%d\n%d\n%d\n\n",a,b,c);
        }
        printf("%d\n%d\n%d\n",a,b,c);
    }
    return 0;
}
