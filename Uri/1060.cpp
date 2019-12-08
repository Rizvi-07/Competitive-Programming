#include<stdio.h>

int main()
{
    int i,cnt=0;
    double a;
    for(i=0;i<6;i++){
        scanf("%lf",&a);
        if(a>0)
            cnt++;
    }
    printf("%d valores positivos\n",cnt);
    return 0;
}
