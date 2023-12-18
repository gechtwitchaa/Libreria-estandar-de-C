#include <stdio.h>

#define MAX_BUFFER_SIZE 100

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");


    fclose(file);


    file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para lectura.\n");
        return 1;
    }

    char buffer[MAX_BUFFER_SIZE];


    if (fscanf(file, "%99[^\n]", buffer) != 1) {
        printf("Error al leer del archivo.\n");
        return 1;
    }

    printf("Leído del archivo: %s\n", buffer);

    
    fclose(file);

    return 0;
}
