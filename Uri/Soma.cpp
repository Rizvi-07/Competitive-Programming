#include<stdio.h>

int main()
{
    int A,B;
    double C;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%lf",&C);
    int D,E;
    double F;
    scanf("%d",&D);
    scanf("%d",&E);
    scanf("%lf",&F);

    printf("VALOR A PAGAR: R$ %.2lf\n",(B*C+E*F));
    return 0;

}
