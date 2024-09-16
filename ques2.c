#include <stdio.h>
int main (){
int a,b,c;
printf("Enter a value a of a : ");
scanf("%d",&a);
printf("Enter a value a of b : ");
scanf("%d",&b);
printf("Enter a value a of c : ");
scanf("%d",&c);
 
switch (a>b && a>c)
{
case 1:
 printf("a is the maximum mumber\n");
    break;
    case 0 :
    switch (b>a && b>c)
    {
    case 1:
    printf("b is the maximum number\n");
        break;
    
    default:
    printf ("c is the maximum number\n");
        break;
    }


}

switch (a<b && a<c)
{
case 1 :
printf("a is the minumum mumber");
    break;
    case 0 :
    switch (b<a && b<c)
    {
    case 1:
    printf("b is the minimum number");
        break;
    

default:
printf ("c is the minimum number");
    break;
}}
    return 0;
}