#include <stdio.h>

int main() {
    int numero, suma = 0;

    printf("Num: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero / 2; i++) {
        if (numero % i == 0) {
            suma += i;
        }
    }

    printf("Sum:%d",suma);
    return 0;
}
