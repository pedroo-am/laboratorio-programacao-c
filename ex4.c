/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/



#include <stdio.h>

int main() {
    char palavra[100];
    int i, quantidade = 0;
    
    printf("Digite uma palavra:");
    fgets(palavra, 100, stdin);
    
   for (i = 0; palavra[i] != '\0' && palavra[i] != '\n'; i++) {
        quantidade++;
}
 
 
 printf("Digite a quantidade de caracteres: %d\n", quantidade);
 
 return 0;
}