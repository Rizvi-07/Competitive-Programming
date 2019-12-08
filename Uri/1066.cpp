#include<stdio.h>

int main()
{
    int i,a,cntO=0,cntE=0,cntP=0,cntN=0;
    for(i=0;i<5;i++)
    {
        scanf("%d",&a);
        if(a>0)
            cntP++;
        if(a<0)
            cntN++;
        if(a%2==1 || a%2==-1)
            cntO++;
        if(a%2==0)
            cntE++;
    }
    printf("%d valor(es) par(es)\n",cntE);
    printf("%d valor(es) impar(es)\n",cntO);
    printf("%d valor(es) positivo(s)\n",cntP);
    printf("%d valor(es) negativo(s)\n",cntN);

    return 0;
}
