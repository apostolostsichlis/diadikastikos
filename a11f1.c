#include <stdio.h>

int main()
{
    long price, posa;
    double tax, costos;

    printf("Dwse thn timh tou temaxiou:\n");
    scanf("%ld", &price);

    printf("Dwse to pososto FPA:\n");
    scanf("%lf", &tax);

    printf("Dwse to plithos twn temaxiwn:\n");
    scanf("%ld", &posa);

    costos= posa*price + posa*price*tax;

    printf("To kostos ths paragelias einai %lf", costos);

    return 0;
}
