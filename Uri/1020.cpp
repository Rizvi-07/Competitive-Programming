#include<stdio.h>

int main()
{
    char ch[3][10] = {"ano(s)","mes(es)","dia(s)"};
    int a,ans,b[3]={365,30,1};
    scanf("%d",&a);
    for(int i=0;i<3;i++)
    {
        ans = a/b[i];
        printf("%d %s\n",ans,ch[i]);
        a = a%b[i];
    }
    return 0;
}
