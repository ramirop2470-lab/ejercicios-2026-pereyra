#include <stdio.h>

#define TAM 10

// Función que suma los valores del vector y calcula el promedio
float sumarYPromediar(int vector[], int n, int *suma) {
    int i;
    float promedio;

    *suma = 0;
    for (i = 0; i < n; i++) {
        *suma += vector[i];
    }

    promedio = (float)(*suma) / n;
    return promedio;
}

// Función que ordena el vector de mayor a menor
void ordenarDescendente(int vector[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (vector[j] < vector[j + 1]) {
                temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vector[TAM];
    int i, suma;
    float promedio;

    printf("Ingrese los %d valores del vector:\n", TAM);
    for (i = 0; i < TAM; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    ordenarDescendente(vector, TAM);

    printf("\nVector ordenado de mayor a menor:\n");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    promedio = sumarYPromediar(vector, TAM, &suma);

    printf("\nSuma total: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);

    return 0;
}
