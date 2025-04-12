#include <stdio.h>

int fibonacci(int);

int main()
{
    int n;

    printf("Hello, world!");

    printf("Ingrese n, numero natural, para calcular la secuencia de fibonacci hasta su n-avo paso\n");
    scanf("%d", &n);

    printf("El %d-avo numero de la secuencia de fibonacci es: %d\m", fibonacci(n));

    return 0;
}

int fibonacci(int n)
{
    int a = 1, b = 0, c = 0, k = 0;

    for(k = 0; k < n; k++)
    {
        c = b + a;
        a = b; 
        b = c;
    }

    return a;
}