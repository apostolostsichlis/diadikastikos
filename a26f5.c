#include <stdio.h>

#define rt1 5
#define ct1 7
#define rt2 4
#define ct2 5

void populate_array(int rt, int ct, int tab[rt][ct]);
void print_part_of_array(int R,int C,int rt,int ct,int tab[rt][ct]);
void sum_rows(int R,int C,int rt,int ct,int tab[rt][ct],int sum[ct]);

int main()
{
    //1.ASKING FOR ROWS AND COLS
    int R,C;
    printf("Give rows:");
    scanf("%d",&R);
    printf("Give columns:");;
    scanf("%d",&C);

    //2.POPULATING BOTH ARRAYS TO FULL CAPACITY
    int tab1[rt1][ct1], tab2[rt2][ct2];
    populate_array(rt1, ct1, tab1);
    populate_array(rt2,ct2,tab2);

    //3.PRINTING BOTH FULL ARRAYS
    print_part_of_array(rt1,ct1,rt1,ct1,tab1);
    printf("\n");
    print_part_of_array(rt2,ct2,rt2,ct2,tab2);
    printf("\n");

    //4.A) PRINTING PART OF ARRAY 4.B) PRINTING SUM OF COLS USING SUM_ROWS
    int i;
    int sum1[ct1]={0};
    int sum2[ct2]={0};
    print_part_of_array(R,C,rt1,ct1,tab1);
    printf("\n");
    sum_rows(R,C,rt1,ct1,tab1,sum1);
    printf("sum(tab1)=");
    for(i=0;i<ct1;i++)
        printf("  %d", sum1[i]);
    printf("\n");
    printf("\n");
    print_part_of_array(R,C,rt2,ct2,tab2);
    printf("\n");
    sum_rows(R,C,rt2,ct2,tab2,sum2);
    printf("sum(tab2)=");
    for(i=0;i<ct2;i++)
        printf("  %d", sum2[i]);
    printf("\n");


    return 0;
}

void populate_array(int rt, int ct, int tab[rt][ct])
{
    int i,j;
    for(i=0;i<rt;i++)
        for(j=0;j<ct;j++)
            tab[i][j]=i*ct+j;
}

void print_part_of_array(int R,int C,int rt,int ct,int tab[rt][ct])
{
    int i,j;
    for(i=0;i<R;i++)
    {
        printf("row ( %d )::", i);
        for(j=0;j<C;j++)
            printf("   %d", tab[i][j]);
        printf("\n");
    }
}

void sum_rows(int R,int C,int rt,int ct,int tab[rt][ct],int sum[ct])
{
    int i,j;
    for(j=0;j<C;j++)
        for(i=0;i<R;i++)
            sum[j]+=tab[i][j];
}
