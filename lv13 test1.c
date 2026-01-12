#include <stdio.h>
#include <stdlib.h>

void change(char *s);

void change(char *s) {
    while (*s != '\0') {
        if (!( (*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z') )) {
            char dg = 'A', gg = 'Z';
            *s = (char)(dg + rand() % (gg - dg + 1));
        }
        s++;
    }
}

int main(void) {
    char str[50];

    fgets(str, 50, stdin);

    char *p = str;
    while (*p != '\0') {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    srand(1);

    change(str);

    printf("REZULTATI:\n");
    printf("%s", str);

    return 0;
}
