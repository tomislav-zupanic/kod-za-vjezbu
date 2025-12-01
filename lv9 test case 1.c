#include <stdio.h>

int razlikaMaxMin(int x);

int main(void) {
    int n;
    int rezultat;
    printf("Unesite vas broj: \n");
    scanf("%d", &n);

    rezultat = razlikaMaxMin(n);

    printf("REZULTATI:\n");
    printf("%d\n", rezultat);

    return 0;
}

int razlikaMaxMin(int x) {
    int max = 0;
    int min = 9;
    int ostatak;

    if (x < 0) x *= -1; 

    if (x < 10) {
        return 0; 
    }

    while (x > 0) {
        ostatak = x % 10;
        if (ostatak > max)  max = ostatak;
        if (ostatak < min)  min = ostatak;
        x /= 10;
    }

    return max - min;
}