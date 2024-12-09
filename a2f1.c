#include <stdio.h>

int main()
{
    long pleures1, pleures2;
    double embadatrig;

    printf("Dwse to mhkos ths 1hs kathetis pleuras:\n");
    scanf("%ld",&pleures1);

    printf("Dwse to mhkos ths 2hs kathetis pleuras:\n");
    scanf("%ld",&pleures2);

    embadatrig = ( pleures1 * pleures2 ) / 2.0;

    printf("To embado einai:%lf", embadatrig);

    return 0;
}
