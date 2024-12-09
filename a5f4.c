#include<stdio.h>
#include<stdbool.h>

int cube(int a_num);
int sum_cube(int num);
bool isArmstrong(int num);

int main()
{

    for (int i=1;i<=999;i++)
    {

        if(isArmstrong(i))
        {
            printf("%d\n",i);
        }
    }
    return 0;
}

int cube(int a_num)
{
    /*
    int prod=1;
    for (int i=0;i<3;i++)
    {
        prod*=prod*a_num;
    }
    */
    return a_num*a_num*a_num;

}

int sum_cube(int num)
{
    int dig1, dig2, dig3, sum;
    dig1=num%10;
    dig2=(num%100)/10;
    dig3=num/100;
    sum=cube(dig1)+cube(dig2)+cube(dig3);
    return sum;
}

bool isArmstrong(int num)
{
    if(sum_cube(num)==num)
    {
        return true;
    }
    return false;
}


