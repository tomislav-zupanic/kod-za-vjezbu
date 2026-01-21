
#include <stdio.h>
#include <stdlib.h>

void fillPSArray(float *array, int size, float ll, float ul);

int main(void)
{
    int m = 0;
    float *p = NULL;
    int i = 0;
    float min = 0.0f, max = 0.0f;

    srand(1);

    do {
        if (scanf("%d", &m) != 1) return 0;
    } while (m < 1 || m >= 21);

    p = (float *)malloc((size_t)m * sizeof(float));
    if (p == NULL) {
        printf("REZULTATI:\n");
        return 0;
    }

    fillPSArray(p, m, -100.0f, 100.0f);

    min = *p;
    max = *p;

    for (i = 1; i < m; i++) {
        if (*(p + i) < min) min = *(p + i);
        if (*(p + i) > max) max = *(p + i);
    }

    printf("REZULTATI:\n");
    printf("min: %.2f max: %.2f\n", min, max);

    free(p);
    p = NULL;

    return 0;
}

void fillPSArray(float *array, int size, float ll, float ul)
{
    int i = 0;
    for (i = 0; i < size; i++) {
        *(array + i) = ll + (float)rand() / (float)RAND_MAX * (ul - ll);
    }
}
