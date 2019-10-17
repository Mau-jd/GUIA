#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
int indicador;
printf("Ingresar valor");
scanf("%d",&indicador);
if(indicador==1)printf("CALOR\n");
if(indicador==2)printf("TEMPLADO\n");
if(indicador==3)printf("FRIO\n");
if(indicador==4)printf("FUERA DE RANGO\n");
}

