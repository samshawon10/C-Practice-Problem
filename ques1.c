#include <stdio.h>
int main (){
int a,b;
printf("Enter a value a of a : ");
scanf("%d",&a);
printf("Enter a value a of b : ");
scanf("%d",&b);
 
switch (a>b)
{case 1 :

 printf("a is greater than b");
    break;
    case 0 :
    switch (a<b)
    {
    case 1 :
    printf("a is smaller than b");
        break;
    
    default:
    printf("a is equal to b");
        break;
    }
}
    return 0;
}