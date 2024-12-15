#include <stdio.h>
int main()
{
    int misthos, tekna;
    float epidoma;

    printf("Dwse vasiko mistho:");
    scanf("%d",&misthos);

    printf("Dwsearithmo paidion:");
    scanf("%d",&tekna);

    switch (tekna)
    {
        case 0:
                epidoma=0;
        case 1:
                epidoma=misthos*0.04;
        case 2:
                epidoma=misthos*0.09;
        case 3:
                epidoma=misthos*0.15;
        default:
                epidoma=misthos*0.15;
                epidoma+=(tekna-3)*(misthos*0.04);

    }
    printf("Epidoma:%.2lf",epidoma);
    return 0;
}
