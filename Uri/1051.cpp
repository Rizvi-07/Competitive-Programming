#include<stdio.h>

int main()
{
    double a;
    while(scanf("%lf",&a)==1){
        double b,c,d,k;

        if(2000<a&&a<=3000){
            d = a - 2000;
            k = d*.08;
            printf("R$ %.2lf\n",k);
        }
        else if(3000<a&&a<=4500){
            d = a - 3000;
            k = 0.18*d;
            printf("R$ %.2lf\n",80+k);
        }
        else if(4500<a){
            d = a - 4500;
            k = d*.28;
            printf("R$ %.2lf\n",80+270+k);
        }
        else
             printf("Isento\n");

    }
    return 0;
}
