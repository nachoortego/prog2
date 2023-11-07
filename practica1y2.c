#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/*Ejercicio 13. Escriba un programa que lea un entero n entre 5 y 100 y luego solicite al usuario
el ingreso de n enteros, los cuales debe guardar en un arreglo. Finalmente, debe determinar si
la suma de los elementos del arreglo es mayor a 30. Si el usuario ingresa un número n menor
a 5 o mayor a 100 entonces se deberá imprimir un mensaje de Error y el ingreso del arreglo y
el análisis de su contenido no se realizará.*/

char* ej13 (int n) {
    int arr[n], suma = 0;

    if (n<5 || n>100) return "Error";
    for (int i = 0; i < n; i++) {
        printf("Ingrese el %i entero: ", i+1);
        scanf("%i",&arr[i]);
        suma += arr[i];
    }

    if (suma > 30) return "La suma de elementos es mayor a 30";
    if (suma <= 30) return "La suma de elementos es menor o igual a 30";
}

int main() {
    int a;
    //printf("El resultado es %i\n",fibonacci(0));
    printf("Ingrese un entero: ");
    scanf("%i",&a);
    printf("%s",ej13(a));
    return 0;
}
