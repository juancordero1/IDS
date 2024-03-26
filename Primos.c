#include <stdio.h>
int main() {
int n, contador, residuocero;
contador=1;
residuocero=0;
printf("PRIMOS\n");
printf("Ingresa un número entero: ");
scanf("%i",&n);
do
{
    if (n % contador==0)
    {
        residuocero=residuocero+1;
    }
    contador=contador+1;
}while(contador<=n);
if(residuocero==2)
{
    printf("El número si es primo");
}
else
{
    printf("El número no es primo");
}
return 0;
}