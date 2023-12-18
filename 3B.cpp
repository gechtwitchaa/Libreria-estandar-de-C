#include <stdio.h>

#define MAX_BUFFER_SIZE 100

int main() {
    FILE *file = fopen("file.txt", "w");
    if (file == NULL) {
        printf("El archivo no se pudo abrir para escritura.\n");
        return 1;
    }

  