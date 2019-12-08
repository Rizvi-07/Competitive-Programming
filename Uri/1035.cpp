#include<stdio.h>

int main()
{
    int i,a[4];
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
    }
    if(a[2-1]>a[3-1]&&a[4-1]>a[1-1]&&((a[3-1]+a[4-1])>(a[1-1]+a[2-1]))&&a[3-1]>0&&a[4-1]>0&&a[1-1]%2==0)
        printf("Valores aceitos\n");
    else
        printf("Valores nao aceitos\n");

    return 0;
}
