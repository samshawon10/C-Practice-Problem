#include <stdio.h>
int main (){
printf("The alphabets from a to z without the vowels : ");
for (char ch = 'a'; ch <= 'z'; ++ch )
{
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            printf("%c ", ch);
        }
    }



    return 0;
}