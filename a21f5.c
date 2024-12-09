#include <stdio.h>
#include <math.h>

int main()
{
    double arra[5], aray[4];
    int i;

    for(i=0;i<5;i++)
    {
        printf("Enter number (%d) :",i);
        scanf("%lf",&arra[i]);
    }

    for(i=0;i<4;i++)
    {
        aray[i]=fabs(arra[i]-arra[i+1]);
    }

    for(i=0;i<5;i++)
    {
        printf("%.2lf ",arra[i]);
    }

    printf("\n");

    for(i=0;i<4;i++)
    {
        printf("%.2lf ",aray[i]);
    }

    return 0;
}
