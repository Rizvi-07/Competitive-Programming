#include<stdio.h>

int main()
{
    int d1,h1,m1,s1,d2,h2,m2,s2;
    int d,h,m,s;
    while(scanf("%d %d %d %d %d %d %d %d",&d1,&h1,&m1,&s1,&d2,&h2,&m2,&s2)==8)
    {

    if(d1==d2){
        d=0;
    }
    if(d1<d2){
        d = d2-d1;
    }
    if(h1==h2||h1<h2)
        h = h2-h1;
    if(h1>h2){
        h = 24-h1+h2;
        d--;
    }
    if(m1==m2||m1<m2)
        m = m2-m1;
    if(m1>m2){
        m = 60-m1+m2;
        h--;
    }
    if(s1==s2||s1<s2)
        s = s2-s1;
    if(s1>s2){
        s = 60-s1+s2;
        m--;
    }
    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);

    }
    return 0;
}
