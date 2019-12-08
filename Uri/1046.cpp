#include<stdio.h>

int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2){

        if(a>=b)
            printf("O JOGO DUROU %d HORA(S)\n",(24-a)+b);

        else if(a<b)
            printf("O JOGO DUROU %d HORA(S)\n",b-a);
    }
    return 0;
}
