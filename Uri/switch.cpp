// Following is a simple program to demonstrate
// syntax of switch.
#include <stdio.h>
int main()
{
   char x ;
   scanf("%c", &x);

   switch (x)
   {
       case '+': printf("Choice is 1");
               break;
       case '-': printf("Choice is 2");
                break;
       case '*': printf("Choice is 3");
               break;
       default: printf("Choice other than 1, 2 and 3");
                break;
   }
   return 0;
}
