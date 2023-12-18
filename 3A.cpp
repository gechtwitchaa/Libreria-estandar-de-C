#include <stdio.h>

#define MAX_FILENAME_LENGTH 100

int main() {
    char filename[MAX_FILENAME_LENGTH];
    printf("Ingresa el nombre del archivo: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error al leer el nombre del archivo.\n");
        return 1;
    }

 