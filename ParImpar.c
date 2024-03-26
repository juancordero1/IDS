#include <stdio.h>
int main() {
int n, contador;
contador=1;
printf("PAR/IMPAR\n");
do
{
    printf("Ingresa un número: ");
    scanf("%i",&n);
    if(n % 2==0)
    {
        printf("El número es par\n\n");
    }
    else
    {
        printf("El número es impar\n\n");
    }
    contador=contador+1;
}while (contador<=10);

return 0;
}