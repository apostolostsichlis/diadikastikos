#include <stdio.h>
#include <string.h>

int main()
{
    int numero, nNumero;
    int L;
    char formattedN[80]; //Max L 79+1 cause of \0.

    //Num and length input.
    printf("Enter a number: ");
    scanf("%d", &numero);

    printf("Enter the desired length L: ");
    scanf("%d", &L);

    //Making the desired number.
    snprintf(formattedN, sizeof(formattedN), "%0*d", L, numero);
    printf("Number: %s\n", formattedN);

    // Finding the next.
    nNumero = numero + 1;
    snprintf(formattedN, sizeof(formattedN), "%0*d", L, nNumero);
    printf("Number: %s\n", formattedN);

    return 0;
}
