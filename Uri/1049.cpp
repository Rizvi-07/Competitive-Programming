#include<stdio.h>
#include <string.h>
int main()
{
    char c[3][15];
    int i;
    for(i=0;i<3;i++){
        scanf("%s",&c[i][0]);
    }

    if((strcmp(c[0],"vertebrado")==0)&&(strcmp(c[1],"ave")==0)&&(strcmp(c[2],"onivoro")==0))
        printf("pomba\n");
    else if((strcmp(c[0],"vertebrado")==0)&&(strcmp(c[1],"ave")==0)&&(strcmp(c[2],"carnivoro")==0))
         printf("aguia\n");
    else if((strcmp(c[0],"vertebrado")==0)&&(strcmp(c[1],"mamifero")==0)&&(strcmp(c[2],"onivoro")==0))
        printf("homem\n");
    else if((strcmp(c[0],"vertebrado")==0)&&(strcmp(c[1],"mamifero")==0)&&(strcmp(c[2],"herbivoro")==0))
        printf("vaca\n");
    else if((strcmp(c[0],"invertebrado")==0)&&(strcmp(c[1],"inseto")==0)&&(strcmp(c[2],"hematofago")==0))
        printf("pulga\n");
    else if((strcmp(c[0],"invertebrado")==0)&&(strcmp(c[1],"inseto")==0)&&(strcmp(c[2],"herbivoro")==0))
        printf("lagarta\n");
    else if((strcmp(c[0],"invertebrado")==0)&&(strcmp(c[1],"anelideo")==0)&&(strcmp(c[2],"hematofago")==0))
        printf("sanguessuga\n");
    else if((strcmp(c[0],"invertebrado")==0)&&(strcmp(c[1],"anelideo")==0)&&(strcmp(c[2],"onivoro")==0))
        printf("minhoca\n");

    return 0;
}
