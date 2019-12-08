#include<stdio.h>

int main()
{
    double a,b,c,d;
    while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)==4)
    {
        double avg,sum;
        sum = (a*2+b*3+c*4+d);
        avg = sum/10;
        printf("Media: %.1lf\n",avg);
        if(avg >= 7.0)
            printf("Aluno aprovado.\n");
        else if(avg < 5.0)
            printf("Aluno reprovado.\n");
        else{
            printf("Aluno em exame.\n");
            double ex;
            scanf("%lf",&ex);
            avg = (avg + ex)/2;
            printf("Nota do exame: %.1lf\n",ex);
            if(avg >= 5.0)
                printf("Aluno aprovado.\n");
            else
                printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n",avg);
        }
    }

    return 0;
}
