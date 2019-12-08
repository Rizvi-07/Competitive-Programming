#include<stdio.h>

int main()
{
    int n,sum=0,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //scanf("%d",&a);
        sum = sum+i;
    }
    printf("%d",sum);
    return 0;
}
