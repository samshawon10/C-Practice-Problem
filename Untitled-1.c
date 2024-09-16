#include <stdio.h>
int main(){
int i,n;
printf("Enter a value : ");
scanf("%d",&n);
int sum=0;
for(i=1; i<=n;i++){
if(i%2!=0){
printf("%d+",i);
sum=sum+i;
}

}printf("=");
printf("%d",sum);

    return 0;
}