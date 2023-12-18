#include <stdio.h>

#define MAX_FILENAME_LENGTH 100

int main() {
    char filename[MAX_FILENAME_LENGTH];
    printf("Ingresa el nombre del archivo: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error al leer el nombre del archivo.\n");
        return 1;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("El archivo no existe. Creando el archivo...\n");
        file = fopen(filename, "w");
        if (file == NULL) {
            printf("Error al crear el archivo.\n");
            return 1;
        }
        printf("El archivo '%s' se ha creado con éxito.\n", filename);
        fclose(file);
    } else {
        printf("El archivo '%s' existe.\n", filename);
        fclose(file);
    }

    return 0;
}
