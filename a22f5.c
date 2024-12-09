#include <stdio.h>

int main()
{
    long long karta;
    int psifia[16];
    int i, sum=0;

    //Scan Card Nums
    printf("Insert card number:");
    scanf("%lld",&karta);

    //Store nums in array
    long long temp1=karta;
     for (i = 15; i >= 0; i--)
    {
        psifia[i] = temp1 % 10;
        temp1/= 10;
    }
    //Check for num of digits
    long long temp2 = karta;
    int ar=0;
    while (temp2 > 0)
    {
        ar++;
        temp2 /= 10;
    }

    //Check for 1st digit
    if (psifia[0]<4 || psifia[0]>7)
    {
       printf("%lld is INVALID.", karta);
    }
    else if (ar!=16)//Check for all digits
    {
            printf("%lld is INVALID.", karta);
    }
    else //Continuing with the rest
    {
        for(i=0;i<16;i++)
        {
            if (i%2==0)
            {
                int diplo=psifia[i]*2;
                if (diplo>=10)
                {
                    sum+=diplo%10+diplo/10;
                }
                else
                {
                    sum+=diplo;
                }
            }
            else sum+=psifia[i];
        }
        if (sum%10==0)
        {
            printf("%lld is VALID.", karta);
        }
        else
        {
            printf("%lld is INVALID.", karta);
        }
    }


    return 0;
}
