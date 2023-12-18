#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    srand(time(0));

    printf("Números aleatorios generados con semilla original:\n");
    for (int i = 0; i < 5; ++i) {
        int random_number = rand();
        printf("%d\n", random_number);
    }
