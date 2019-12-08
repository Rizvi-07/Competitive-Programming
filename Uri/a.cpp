#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,AB,AB_c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    AB = (a+b+abs(a-b))/2;
    AB_c = (AB+c+abs(AB-c))/2;

    printf("%d eh o maior\n",AB_c);

    return 0;

}
