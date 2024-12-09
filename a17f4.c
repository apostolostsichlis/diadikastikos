#include <stdio.h>

int total(int numero)
{
    int sum=0, i;
    for (i=1;i<=numero;i++)
    {
        sum+=i;
    }
    return sum;
}

int main()
{
    int num;
    printf("Number:");
    scanf("%d",&num);
    printf("total 10 =%d\n",total(10));
    printf("total %d = %d\n",num, total(num));
    printf("total 100 =%d\n",total(100));
    return 0;
}

