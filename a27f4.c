#include <stdio.h>

long encode(long arxikos) {
    int elegxos = (98 - (arxikos * 100) % 97) % 97;
    return arxikos * 100 + elegxos;
}

int check(long telikos) {
    return (telikos % 97 == 1);
}

int main() {
    long low, up;

    printf("Lower Limit: ");
    scanf("%ld", &low);
    printf("Upper Limit: ");
    scanf("%ld", &up);

    for (long N = low; N <= up; N++)
        {
        long telikos = encode(N);
        int isValid = check(telikos);

        printf("Code: %ld, Encoding: %ld, isValid: %s\n",
               N, telikos, isValid ? "Yes" : "No");
    }

    return 0;
}
