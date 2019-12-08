#include<stdio.h>

int main()
{
    double a,b,c;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a>b&&a>c)
        {
            if((b+c)>a)
                printf("Perimetro = %.1lf\n",(a+b+c));
        }


        else
            printf("Area = %.1lf\n",0.5*(a+b)*c);
    }
    return 0;
}
