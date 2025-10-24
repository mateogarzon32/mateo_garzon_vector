#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 100

// Declaración de la función mg
void garzon(int vec[], int n);

int main() {
    int Garzon[MAX];
    int tamano;

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &tamano);

    if ((tamano <= 0) || (tamano > 100)) {
        printf("Tamaño inválido\n");
        return 1;
    }

    srand(time(NULL));

    // Llenar el vector con números aleatorios del 0 al 99
    for (int i = 0; i < tamano; i++) {
        Garzon[i] = rand() % 100;
    }

    // Llamar a la función mg para mostrar el vector
    garzon(Garzon, tamano);

    return 0;
}

// Definición de la función mg
void garzon(int vec[], int n) {
    printf("\nContenido del vector garzon:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");
}
