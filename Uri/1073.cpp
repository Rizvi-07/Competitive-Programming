#include<stdio.h>

int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=2;i<=a;i++){
        if(i%2==0){
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}
