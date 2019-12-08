#include<stdio.h>

int main()
{
    int i,a;
    scanf("%d",&a);
    for(i=0;i<=a;i++){
        if(i%2==1){
             printf("%d\n",i);
        }
    }

    return 0;
}
