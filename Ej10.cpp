#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(void){
float l, p;
printf("Ingresar litro\n");
scanf("%f",&l);
if(l<=50){
printf("Gratis\n");
}
if (l>70){
if(l<200){
p=l*10;
printf("Se pagara:%f",p);
}
}
if(l>=200){
p=l*20;
printf("Se pagara:%f",p);
}
if(l<=70,l>50){
printf("Se pagara:200");
}





}
