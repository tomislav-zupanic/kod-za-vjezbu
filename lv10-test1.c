#include <stdio.h>

int main(void){
    int m, n;
    int i, j;

    scanf("%d", &m);   // npr. 2
    scanf("%d", &n);   // npr. 3

    double matrica[10][12];

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%lf", &matrica[i][j]);
        }
    }

    double min = matrica[0][0];
    int brojStupca = 0;

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (matrica[i][j] < min) {
                min = matrica[i][j];
                brojStupca = j;
            }
        }
    }

    printf("REZULTATI:\n");

    printf("%.2f\n", min);

    for (i = 0; i < m; i++) {
        printf("%.2f\n", matrica[i][brojStupca]);
    }

    return 0;
}
