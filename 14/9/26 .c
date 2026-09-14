#include <stdio.h>
#include <string.h>

struct Alumno {
    char nombre[50];
    int edad;
    int anio;
};

int main() {
    struct Alumno alumno1;

    // Definir los datos iniciales
    strcpy(alumno1.nombre, "Juan Perez");
    alumno1.edad = 20;
    alumno1.anio = 3;

    printf("Datos originales:\n");
    printf("Nombre: %s, Edad: %d, Año: %d\n", alumno1.nombre, alumno1.edad, alumno1.anio);

    // El usuario modifica los datos
    printf("\nIngrese nuevo nombre: ");
    scanf("%s", alumno1.nombre);
    printf("Ingrese nueva edad: ");
    scanf("%d", &alumno1.edad);
    printf("Ingrese nuevo año: ");
    scanf("%d", &alumno1.anio);

    printf("\nDatos modificados:\n");
    printf("Nombre: %s, Edad: %d, Año: %d\n", alumno1.nombre, alumno1.edad, alumno1.anio);

    return 0;
}
