#include<stdio.h>

int main()
{
    int i,a,b,sum=0;
    scanf("%d %d",&a,&b);
    for(i=b+1;i<a;i++){
        if(i%2==1 || i%2==-1){
             sum=sum+i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
