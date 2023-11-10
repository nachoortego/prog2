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


/*
Ejercicio 18. Escriba una función que reciba una cadena de caracteres y un caracter y devuelva
0 si el caracter esta presente en la cadena, o 1 en caso contrario.

Ejercicio 19. Escriba una función que reciba una cadena de caracteres y un caracter y devuelva
la cantidad de apariciones del caracter en la cadena dada.

Ejercicio 20. Escriba un programa que lea por teclado una cadena de caracteres y la imprima
por pantalla al revés.

Ejercicio 21. Escriba una función que reciba una cadena de caracteres y determine si la
misma es capicúa.

Ejercicio 22. Escriba una función que reciba una cadena de caracteres y determine si es un
pangrama, es decir, si para escribir la línea se utilizaron todos los caracteres del alfabeto.

Ejercicio 23. Escriba una función que reciba dos cadenas de caracteres y determine si una
está contenida dentro de la otra.
*/

int ej18 (char word[], int largo, char c) {
    int found = 0;
    for(int i = 0; i<largo; i++){
        if (word[i] == c) found = 1;
    }

    if (found) return 1;
    return 0;
}


int ej19 (char word[], int largo, char c) {
    int count = 0;
    for(int i = 0; i<largo; i++){
        if (word[i] == c) count++;
    }

    return count;
}

void ej20 (char word[], int largo) {
    for(int i = largo-1; i>=0; i--){
        printf("%c", word[i]);
    }
}

int main() {
    int a;
    //printf("El resultado es %i\n",fibonacci(0));

    //printf("Ingrese un entero: ");
    //scanf("%i",&a);
    //printf("%s",ej13(a));

    ej20("hola",5);
    return 0;
}

