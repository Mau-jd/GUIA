#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){
float a, e, p, c;
printf("Ingrese la altura en metros\n");
scanf("%f",&a);
printf("Ingrese la edad\n");
scanf("%f",&e);
c= a*100;// Altura en cm
p= (c-100+e*.10)*0.9;
printf("El peso recomendado:%f",p);


}
