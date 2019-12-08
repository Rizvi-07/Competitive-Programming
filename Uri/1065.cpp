#include<stdio.h>

int main()
{
    int i,a,cnt=0;
    for(i=0;i<5;i++){
        scanf("%d",&a);
        if(a%2==0){
            cnt++;
        }
    }
    printf("%d valores pares\n",cnt);
    return 0;
}

