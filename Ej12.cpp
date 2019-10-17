#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main(){
int x;
printf("Ingrese la cantidad:_");
scanf("%d",&x);
for(int i=1;i<=x;i=i+1){
    for(int j=1;j<=i;j=j+1){
   printf("%d",j);
}
printf("\n");
}
}
