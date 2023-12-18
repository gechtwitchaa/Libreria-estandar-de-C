#include <string.h>
#include <stdio.h>

#define MAX_LENGTH 100

int main() {
    char str[MAX_LENGTH];

    printf("Ingresa una cadena: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Error al leer la cadena.\n");
        return 1;
    }

 
