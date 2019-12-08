#include<stdio.h>

int main()
{
    int a[3];
    int j,i,temp;
    for(i=0;i<3;i++){
        scanf("%d",&a[i]);
    }
    for(j=2;j>=0;j--){
        for(i=2;i>=0;i--){
            if(a[i]>a[i-1]){
            temp = a[i];
            a[i] = a[i-1];
            a[i-1] = temp;
            }
        if(i-1==0)
            break;
        }
    }
    for(i=0;i<3;i++){
        printf("%d\n",a[i]);
    }
}
