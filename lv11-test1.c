/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(void) {

    int m;
    int polje[16];   
    int i;

    
    scanf("%d", &m);

    
    for (i = 0; i < m; i++) {
        scanf("%d", (polje + i));   
    }

    
    printf("REZULTATI:\n");

    for (i = 0; i < m; i++) {
        if (*(polje + i) % 2 == 0 && *(polje + i) % 3 == 0) {
            printf("%d\n", *(polje + i));
        }
    }

    return 0;
}

