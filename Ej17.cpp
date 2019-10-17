#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
int  h, m, s, x;
printf("Ingresar numero\n");
scanf("%d",&x);
h= x/3600;
m= (x-h*3600)/60;
s=x-(h*3600+m*60);
printf("%d\n",h);
printf("%d\n",m);
printf("%d\n",s);

}
