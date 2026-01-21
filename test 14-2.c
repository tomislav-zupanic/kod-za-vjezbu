#include <stdio.h>
#include <stdlib.h>

int countSpace(char *s, int n);

int main(void)
{
    int m = 0;
    char *p = NULL;
    int spaces = 0;

    do {
        if (scanf("%d", &m) != 1) return 0;
    } while (m < 1 || m > 25);

    p = (char *)malloc((size_t)(m + 1) * sizeof(char));
    if (p == NULL) {
        printf("REZULTATI:\n");
        return 0;
    }

    getchar();

    if (fgets(p, m + 1, stdin) == NULL) {
        free(p);
        p = NULL;
        printf("REZULTATI:\n");
        return 0;
    }

    {
        char *q = p;
        while (*q != '\0') {
            if (*q == '\n') {
                *q = '\0';
                break;
            }
            q++;
        }
    }

    spaces = countSpace(p, m);

    printf("REZULTATI:\n");
    printf("%d\n", spaces);

    free(p);
    p = NULL;

    return 0;
}

int countSpace(char *s, int n)
{
    int cnt = 0;
    int i = 0;

    for (i = 0; i < n && *(s + i) != '\0'; i++) {
        if (*(s + i) == ' ') cnt++;
    }

    return cnt;
}
