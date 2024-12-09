#include <stdio.h>

int main()
{
    int days;
    long pay;
    double totalgift, giftpercent;

    printf("Dwse tis hmeres ergasias tou etous:\n");
    scanf("%d",&days);

    printf("Dwse thn hmerhsia amoibh:\n");
    scanf("%ld",&pay);

    printf("Dwse to pososto dwroy:\n");
    scanf("%lf",&giftpercent);

    totalgift=days*(pay*giftpercent);

    printf("To dwro einai %lf\n", totalgift);

    return 0;
}


