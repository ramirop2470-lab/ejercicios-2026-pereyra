#include <stdio.h>

#define TAM 5

int main() {
    int vector[TAM];
    int i, suma = 0;
    float promedio;

    // Cargar datos del vector
    printf("Ingrese los %d elementos del vector:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &vector[i]);
    }

    // Sumar todos los datos
    for (i = 0; i < TAM; i++) {
        suma += vector[i];
    }

    printf("\nLa suma de todos los elementos es: %d\n", suma);

    // Calcular el promedio
    promedio = (float) suma / TAM;
    printf("El promedio de los elementos es: %.2f\n", promedio);

    return 0;
}
