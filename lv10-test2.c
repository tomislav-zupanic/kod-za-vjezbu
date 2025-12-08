#include <stdio.h>

int main(void){

    int m, n;
    int i, j;

    scanf("%d", &m);
    scanf("%d", &n);

    double matrica[12][14];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &matrica[i][j]);
        }
    }

    printf("REZULTATI:\n");

    for (j = 0; j < n; j++) {
        double suma = 0;

        for (i = 0; i < m; i++) {
            suma += matrica[i][j];
        }

        printf("%.2f\n", suma / m);
    }

    return 0;
}
