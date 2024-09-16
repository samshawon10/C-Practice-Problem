#include <stdio.h>

int main() {
    int a, b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

   
    switch (a % b) {
        case 1 :{
            case 0 :
            printf("a is divisible by b");
            break;}
        default:
            printf("a is not divisible by b");
            break;
    }

    return 0;
}
