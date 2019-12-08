#include<stdio.h>

int main()
{
    int a,b;
    double c[5]={4.00,4.50,5.00,2.00,1.50};
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        printf("Total: R$ %.2lf\n",c[a-1]*b);
    }

    return 0;
}
