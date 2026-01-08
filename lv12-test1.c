#include <stdio.h>

/* NE DIRATI deklaraciju funkcije */
double calculate(int *p, int n);

int main(void)
{
    int polje[10];
    double rezultat;
    int i;

    // unos elemenata polja (POKAZIVAČKA NOTACIJA)
    for (i = 0; i < 10; i++) {
        scanf("%d", (polje + i));
    }

    // poziv funkcije
    rezultat = calculate(polje, 10);

    printf("REZULTATI:\n");
    printf("%.2lf", rezultat);

    return 0;
}

/* definicija funkcije */
double calculate(int *p, int n)
{
    double suma = 0.0;
    int i;

    for (i = 0; i < n; i++) {
        suma += (i + 1) * (*(p + i)) * (*(p + i));
    }

    return suma;
}
