#include <stdio.h>

#define TAM 5

int main() {
    int vector[TAM];
    int i, opcion, indice, nuevoValor;

    // Cargar datos iniciales del vector
    printf("Ingrese los %d elementos del vector:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vector[i]);
    }

    // Modificar elementos
    do {
        printf("\n¿Desea modificar un elemento? (1 = Si, 0 = No): ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingrese el indice a modificar (0 a %d): ", TAM - 1);
            scanf("%d", &indice);

            if (indice >= 0 && indice < TAM) {
                printf("Ingrese el nuevo valor: ");
                scanf("%d", &nuevoValor);
                vector[indice] = nuevoValor;
                printf("Elemento actualizado correctamente.\n");
            } else {
                printf("Indice invalido.\n");
            }
        }
    } while (opcion == 1);

    // Imprimir el vector, un elemento por linea
    printf("\nVector final:\n");
    for (i = 0; i < TAM; i++) {
        printf("Elemento [%d] = %d\n", i, vector[i]);
    }

    return 0;
}
