#include <stdio.h>
int zbrajac(int broj);

int main(void) {
    int n, zbroj;
    printf("Unesite vas broj:\n");
    scanf("%d", &n);
    zbroj = zbrajac(n);
    printf("REZULTAT:\n");
    printf("%d", zbroj);
    return 0;
}


int zbrajac(int broj) {
    int rezultat, rezerva;
    while (broj >= 10) {           
        rezultat = 0;               
        int kopija = broj;          
        while (kopija > 0) {
            rezerva = kopija % 10;
            rezultat += rezerva;    
            kopija /= 10;
        }
        broj = rezultat;            
    }
    return broj;
}
