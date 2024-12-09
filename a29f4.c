#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0) {
        return num1;
    } else {
        return gcd(num2, num1 % num2);
    }
}

int coprime(int num1, int num2) {
    return gcd(num1, num2) == 1;
}

int phi(int N) {
    int i = 0;
    for (int K = 1; K <= N; K++) {
        if (coprime(N, K)) {
           i++;
        }
    }
    return i;
}

int main() {
    int X;

    printf("Enter X: ");
    scanf("%d", &X);

    for (int i = 1; i <= X; i++) {
        printf("phi(%d) = %d\n", i, phi(i));
    }

    return 0;
}
