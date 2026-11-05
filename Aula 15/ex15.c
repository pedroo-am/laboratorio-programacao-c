/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/




#include <stdio.h>

int main() {

    int assentos[3][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 1, 0, 0}
    };

    int ocupados = 0;
    int disponiveis = 0;

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {

            if (assentos[i][j] == 1) {
                ocupados++;
            }
            else {
                disponiveis++;
            }

        }
    }

    printf("Assentos ocupados: %d\n", ocupados);
    printf("Assentos disponiveis: %d\n", disponiveis);

    return 0;
}
