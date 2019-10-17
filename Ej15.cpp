#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
//ESTA ES LA EXPRESION A DESARROLLAR:
//∑_(i=2)^n▒〖((i^2+1)/i〗)
int main(){
    int x;
for(int i=2;i<20;i=i+1){//COMO SE DESCONCE EL VALOR DE 'n' EL PROGRAMA UNICAMENTE MOSTRARA VALORES <20
        x=(i*i)+1;
    printf("%d",x);
    printf("/%d\n",i);
//RESPUESTA A LA EXPRESION MATEMATICA:
//(i^i+1)/i=(2^2+1)/2 + (3^2+1)/2 + … + (n^2+1)/n
}
}
