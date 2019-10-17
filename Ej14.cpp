#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){
char n;
printf("Ingresar letra\n");
scanf("%c",&n);
switch(n){
case 'a':
case 'A':
case 'e':
case 'E':
case 'i':
case 'I':
case 'o':
case 'O':
case 'u':
case 'U':
printf("Dicha letra es una vocal\n");
break;
default: printf("Dicha letra es una consonante\n");
}
}
