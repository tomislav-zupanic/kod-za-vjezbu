#include <stdio.h>

int main(void) {

    char unos[81];
    char obrnuto[81];
    int i, duljina = 0;

    fgets(unos, 81, stdin);

    while (*(unos + duljina) != '\0' && *(unos + duljina) != '\n') {
        duljina++;
    }

    if (*(unos + duljina) == '\n') {
        *(unos + duljina) = '\0';
    }

    for (i = 0; i < duljina; i++) {
        *(obrnuto + i) = *(unos + duljina - 1 - i);
    }

    *(obrnuto + duljina) = '\0';

    printf("REZULTATI:\n");
    printf("%s\n", unos);
    printf("%s\n", obrnuto);

    return 0;
}
