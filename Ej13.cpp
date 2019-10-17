#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main (void){
int n, i, c=0;
printf("Ingrese un numero: ");
scanf("%d",&n);
for(i=1;1<=n;i++){
    if(n%i==0)c++;
}
if(c==2)printf("El numero es primo");
else printf("El numero no es primo");

getch();
}


