#include<stdio.h>
#include<math.h>

int main()
{
    double a,b;
    int i,ans,e,f,ans1;
    int c[]={100, 50, 20, 10, 5, 2,1};
    double d[]={0.50,0.25,0.10,0.05,0.01};
    scanf("%lf",&a);
    e = floor(a);
    b = (a-floor(a))*100;
    f = b;
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        ans = e/c[i];
        printf("%d nota(s) de R$ %d.00\n",ans,c[i]);
        e = e%c[i];
    }
    ans = e/c[i];
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",ans,c[i]);
    for(i=0;i<5;i++)
    {
        int g = d[i]*100;
        ans1=f/g;
        printf("%d moeda(s) de R$ %.2lf\n",ans1,d[i]);

        f = f%g;
    }

    return 0;
}
