#include<stdio.h>

int main()
{
    int lim, i;
    float athroisma=0;
    printf("Dwse orio:");
    scanf("%d",&lim);

    for (i=1; i<=lim; i++)
    {
        athroisma += 1./i;
    }
    printf("To athroisma einai %.2f",  athroisma);
    return 0;
}
