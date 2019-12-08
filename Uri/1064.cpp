#include<stdio.h>

int main()
{
    int i,cnt=0;
    double a,sum=0;
    for(i=0;i<6;i++){
        scanf("%lf",&a);
        if(a>0){
            sum=sum+a;
            cnt++;
        }
    }
    printf("%d valores positivos\n",cnt);
    printf("%.1lf\n",sum/cnt);
    return 0;
}

