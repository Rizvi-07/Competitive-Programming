#include<stdio.h>

int main()
{
    double a,b,c,temp;
    int j,i;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){

          double x[3];

          x[0]=a;
          x[1]=b;
          x[2]=c;


    for(j=2;j>=0;j--){
        for(i=2;i>=0;i--){
            if(x[i]>x[i-1]){
            temp = x[i];
            x[i] = x[i-1];
            x[i-1] = temp;
            }
        if(i-1==0)
            break;
        }
    }
    a=x[0];
    b=x[1];
    c=x[2];


    if(a >= b+c){
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(a*a == b*b + c*c)
            printf("TRIANGULO RETANGULO\n");
        else if(a*a > b*b + c*c)
            printf("TRIANGULO OBTUSANGULO\n");
        else if(a*a < b*b + c*c)
            printf("TRIANGULO ACUTANGULO\n");


        if(a==b && b==c)
        printf("TRIANGULO EQUILATERO\n");
        else if(a==b||b==c)
        printf("TRIANGULO ISOSCELES\n");
    }
    }

    return 0;
}
