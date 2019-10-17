#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
int a, b, c, d;
printf("Ingrese un numero\n");
scanf("%d",&a);
printf("Ingrese un numero\n");
scanf("%d",&b);
printf("Ingrese un numero\n");
scanf("%d",&c);
d= a;
if(b>d)
    d=b;
if(c>d)
    d=c;
printf("%d",d);




}
