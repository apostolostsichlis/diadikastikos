#include <stdio.h>
int main()
{
    int arkaf, kostos, resta, dievra, monoevra, penhntalepta, eikosalepta, dekalepta;

    printf("Dose kafedes:");
    scanf("%d",&arkaf);

    kostos=arkaf*70;

    if (kostos>500)
        {
        printf("Sfalma");
        }
        else
            {
            resta = 500 - kostos;
            dievra= resta/200;
            monoevra=(resta-dievra*200)/100;
            penhntalepta=(resta-dievra*200-monoevra*100)/50;
            eikosalepta=(resta-dievra*200-monoevra*100-penhntalepta*50)/20;
            dekalepta=(resta-dievra*200-monoevra*100-penhntalepta*50-eikosalepta*20)/10;
            printf("Resta\n");
            printf("Kermata 2E :%d\n",dievra);
            printf("Kermata 1E :%d\n",monoevra);
            printf("Kermata 50L :%d\n",penhntalepta);
            printf("Kermata 20L :%d\n",eikosalepta);
            printf("Kermata 10L :%d\n",dekalepta);
            }
   return 0;
}
