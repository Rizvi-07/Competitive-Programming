#include<stdio.h>

int main()
{
    int a,c,b,d;
    while(scanf("%d %d %d %d",&a,&c,&b,&d)==4){
        if(a<=24 && a>=0 && b<=24 && b>=0 && c<=60 && c>=0 && d<= 60 && d>=0 ){
        int i,j;
        if(a>=b && c>d){
            i = 60-(c-d);
            j = (24-1-a)+b;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,i);
        }
        else if(a>b && c<d){
            i = (d-c);
            j=(24-a)+b;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,i);
        }
        else if(a==b && c==d){
            i = 0;
            j=24;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,i);
        }
        else if(a==b && c<d){
            i = d-c;
            j=0;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,i);
        }
        else if(a<b&& c>d){
            i = 60-(c-d);
            j = b-1-a;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,i);
        }
        else if(a< b&& c<=d){
            i = (d-c);
            j = b-a;

            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",j,i);
        }
    }
    }
    return 0;
}
