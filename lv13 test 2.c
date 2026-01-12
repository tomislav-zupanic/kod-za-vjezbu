#include <stdio.h>
#include <stdlib.h>

void fillArray(int *a, int n);

void fillArray(int *a, int n) {
    int dg = -10 * n;
    int gg =  10 * n;

    int zab_dg = -5 * n;
    int zab_gg =  7 * n;

    int i = 0;
    while (i < n) {
        int x;
        do {
            x = dg + rand() % (gg - dg + 1);
        } while (x >= zab_dg && x <= zab_gg);

        *(a + i) = x;
        i++;
    }
}

int main(void) {
    int a[20];
    int n;

    scanf("%d", &n);

    srand(1);

    fillArray(a, n);

    printf("REZULTATI:\n");
    int i = 0;
    while (i < n) {
        printf("%d", *(a + i));
        if (i < n - 1) printf(" ");
        i++;
    }

    return 0;
}
