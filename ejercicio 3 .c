#include <stdio.h>

#define TAM 5

int main() {
    int vector[TAM];
    int i, indice, continuar;

    // Cargar datos del vector
    printf("Ingrese los %d elementos del vector:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vector[i]);
    }

    // El usuario elige a qué dato acceder
    do {
        printf("\n¿A qué indice desea acceder? (0 a %d): ", TAM - 1);
        scanf("%d", &indice);

        if (indice >= 0 && indice < TAM) {
            printf("El valor en la posicion [%d] es: %d\n", indice, vector[indice]);
        } else {
            printf("Indice invalido. Debe estar entre 0 y %d.\n", TAM - 1);
        }

        printf("¿Desea consultar otro dato? (1 = Si, 0 = No): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    printf("\nPrograma finalizado.\n");

    return 0;
}
