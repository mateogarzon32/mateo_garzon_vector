#include <stdio.h>
#define MAX 100
int main () {
    int Garzon[MAX];
    int tamano;
    printf ("Ingrese el tamaño del vector: ");
    scanf ("%d", &tamano);
    if ((tamano<=0) || (tamano>100)) {
        printf ("Tamaño invalido");
    }
    return 1;
}
