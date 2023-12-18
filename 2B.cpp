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

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    int length = strlen(str);

    printf("La longitud de '%s' es: %d\n", str, length);

    return 0;
}
