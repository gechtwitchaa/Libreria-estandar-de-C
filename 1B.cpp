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


    srand(time(0) + 10);

    printf("\nNúmeros aleatorios generados con una nueva semilla:\n");
    for (int i = 0; i < 5; ++i) {
        int random_number = rand();
        printf("%d\n", random_number);
    }

    return 0;
}
