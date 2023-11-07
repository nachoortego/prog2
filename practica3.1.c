#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    double x;
    double y;
} punto;

double proy ( punto p , char eje ) {
    if (strcmp(eje,'x') == 0) {
        return p.x;
    }
    if (strcmp(eje,'y') == 0) {
        return p.y;
    }
    printf("Eje no válido. Debe ser 'x' o 'y'.\n");
    return 0.0;
}

double dist ( punto punto1 , punto punto2 ) {
    return sqrt(pow((abs(punto1.x - punto2.x)),2) + pow((abs(punto1.y - punto2.y)),2));
}

char pos ( punto p ) {
    
}

int main() {
    printf("Hello, world!\n");
    return 0;
}
