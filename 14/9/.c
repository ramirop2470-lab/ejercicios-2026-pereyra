#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[50];
    int edad;
    int anio;
};

int main() {
    struct Alumno alumnos[3] = {
        {"Juan Perez", 20, 3},
        {"Maria Lopez", 22, 4},
        {"Carlos Diaz", 19, 2}
    };

    // Modificar los 3 con un for
    for (int i = 0; i < 3; i++) {
        printf("\n--- Alumno %d ---\n", i + 1);
        printf("Ingrese nuevo nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("Ingrese nueva edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("Ingrese nuevo año: ");
        scanf("%d", &alumnos[i].anio);
    }

    // Imprimir los 3 modificados
    printf("\nDatos finales:\n");
    for (int i = 0; i < 3; i++) {
        printf("Alumno %d -> Nombre: %s, Edad: %d, Año: %d\n",
               i + 1, alumnos[i].nombre, alumnos[i].edad, alumnos[i].anio);
    }

    return 0;
}
