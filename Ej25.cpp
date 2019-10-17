#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
char color;
printf("Ingresar letra");
scanf("%c",&color);
switch(color){
case 'r':
case 'R':
printf("ROJO\n");
case 'v':
case 'V':
    printf("VERDE\n");
case 'a':
case 'A':
    printf("AZUL\n");
break;
default: printf("NEGRO\n");

}
}
