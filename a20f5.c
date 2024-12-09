#include <stdio.h>

int main()
 {
    int aray[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &aray[i]);
    }


    int last = aray[4];
    for (int i = 4; i > 0; i--)
    {
        aray[i] = aray[i - 1];
    }
    aray[0] = last;

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", aray[i]);
    }

    return 0;
}
