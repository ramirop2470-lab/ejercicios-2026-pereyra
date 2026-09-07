#include <stdio.h>

#define MAX 100

// Función que compara los vectores y muestra el resultado
void compararVectores(int v1[], int v2[], int n) {
    int i, mayor;

    for (i = 0; i < n; i++) {
        if (v1[i] > v2[i]) {
            mayor = v1[i];
            printf("Posición %d: el mayor es %d, pertenece al Vector 1\n", i, mayor);
        } else if (v2[i] > v1[i]) {
            mayor = v2[i];
            printf("Posición %d: el mayor es %d, pertenece al Vector 2\n", i, mayor);
        } else {
            printf("Posición %d: los valores son iguales (%d)\n", i, v1[i]);
        }
    }
}

int main() {
    int vector1[MAX], vector2[MAX];
    int n, i;

    printf("¿Cuántos elementos tendrán los vectores? ");
    scanf("%d", &n);

    printf("Ingrese los datos del Vector 1:\n");
    for (i = 0; i < n; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("Ingrese los datos del Vector 2:\n");
    for (i = 0; i < n; i++) {
        printf("Dato %d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    compararVectores(vector1, vector2, n);

    return 0;
}
