#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){
float r, c, a;
printf("Ingresse el radio\n");
scanf("%f",&r);
c= (2*3.1416)*r;
a= (3.1416*r*r);
printf("Circunferencia del circulo:%f\n",c);
printf("Area del circulo:%f",a);

}
