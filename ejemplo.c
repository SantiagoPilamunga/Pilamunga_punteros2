#include <stdio.h>

int sumar(int a, int b);
void sumarPorReferencia(int *a, int *b, int *resultado);
int main()
{
    int num1, num2, resultado;
    printf("Ingrese el primer numero \n");
    scanf("%d", &num1);
    printf("Ingrese el segundo numero \n");
    scanf("%d", &num2);
    // resultado = sumar(num1, num2);
    // printf("La suma es: %d", resultado);
    sumarPorReferencia(&num1, &num2, &resultado);
    printf("La suma es: %d", resultado);
    return 0;
}

int sumar(int a, int b)
{
    return a + b;
}
void sumarPorReferencia(int *a, int *b, int *resultado)
{
    *resultado = *a + *b;
}