#include <stdio.h>

/* NE DIRATI deklaraciju funkcije */
int count(char* s);

int main(void)
{
    char str[81];
    int rezultat;

    /* unos stringa (do 80 znakova, može sadržavati razmake) */
    fgets(str, 81, stdin);

    /* poziv funkcije */
    rezultat = count(str);

    /* ispis */
    printf("REZULTATI:\n");
    printf("%d", rezultat);

    return 0;
}

/* definicija funkcije ISPOD main() */
int count(char* s)
{
    int mala = 0, velika = 0;
    char *p = s;

    while (*p != '\0') {
        if (*p >= 'a' && *p <= 'z') {
            mala++;
        } else if (*p >= 'A' && *p <= 'Z') {
            velika++;
        }
        p++;  /* pomak na sljedeći znak */
    }

    if (mala == 0 && velika == 0) {
        return 0;       /* nema nijedno slovo */
    } else if (mala > velika) {
        return -1;      /* više malih nego velikih */
    } else {
        return 1;       /* više velikih ili jednako */
    }
}
