#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d %d %d",&a,&b,&c)==3)
    {
           if(a>b && a>c)
           {
                if(b>c)
                printf("%d\n%d\n%d\n\n",a,b,c);
                else
                printf("%d\n%d\n%d\n\n",a,c,b);

                printf("%d\n%d\n%d\n\n",a,b,c);
           }
           else if(b>a && b>c)
           {
                if(a>c)
                printf("%d\n%d\n%d\n\n",b,a,c);
                else
                printf("%d\n%d\n%d\n\n",b,c,a);

                printf("%d\n%d\n%d\n\n",a,b,c);
           }
            else if(c>a && c>b)
           {
                if(a>b)
                printf("%d\n%d\n%d\n\n",c,a,b);
                else
                printf("%d\n%d\n%d\n\n",c,b,a);

                printf("%d\n%d\n%d\n\n",a,b,c);
           }
        }


    return 0;
}
