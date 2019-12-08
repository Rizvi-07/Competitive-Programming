#include<stdio.h>

int main()
{
    double a,b,c;

    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        if(a>=b && a>=c)
        {
            if(b+c<=a)
                printf("Area = %.1lf\n",(a+b)/2*c);
            else
                printf("Perimetro = %.1lf\n",a+b+c);
        }

        else if(b>=a && b>=c)
        {
            if(a+c<=b)
                printf("Area = %.1lf\n",(a+b)/2*c);
            else
                printf("Perimetro = %.1lf\n",a+b+c);

        }
        else if (c>=a && c>=b)
        {
            if(b+a<=c)
                printf("Area = %.1lf\n",(a+b)/2*c);
            else
                printf("Perimetro = %.1lf\n",a+b+c);

        }

    }
    return 0;
}
