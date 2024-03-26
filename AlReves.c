#include <stdio.h>
int main() {
int n, numeroinv, ultimodigito;
printf("AL REVES\n");
printf("Ingresa un número entero: ");
scanf("%i", &n);
do
{
    ultimodigito=n%10;
    n=n/10;
    numeroinv=(numeroinv*10) + ultimodigito;
}while(n>0);
printf("El número al reves es: %i", numeroinv);
return 0;
}