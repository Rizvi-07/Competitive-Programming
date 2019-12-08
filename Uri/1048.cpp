#include<stdio.h>

int main()
{
    double a,i;

    while(scanf("%lf",&a)==1){
       if(0<=a && a<=400.00){
            i = a+a*.15;
            printf("Novo salario: %.2lf\n",i);
            printf("Reajuste ganho: %.2lf\n",i-a);
            printf("Em percentual: 15 %%\n");
       }
       else if(400<a&&a<=800.00){
            i = a+a*.12;
            printf("Novo salario: %.2lf\n",i);
            printf("Reajuste ganho: %.2lf\n",i-a);
            printf("Em percentual: 12 %%\n");
       }
       else if(800<a&&a<=1200.00){
            i = a+a*.10;
            printf("Novo salario: %.2lf\n",i);
            printf("Reajuste ganho: %.2lf\n",i-a);
            printf("Em percentual: 10 %%\n");
       }
       else if(1200<a&&a<=2000.00){
            i = a+a*.07 ;
            printf("Novo salario: %.2lf\n",i);
            printf("Reajuste ganho: %.2lf\n",i-a);
            printf("Em percentual: 7 %%\n");
       }
       else if(2000<a){
            i = a+a*.04 ;
            printf("Novo salario: %.2lf\n",i);
            printf("Reajuste ganho: %.2lf\n",i-a);
            printf("Em percentual: 4 %%\n");
       }
    }
    return 0;
}
