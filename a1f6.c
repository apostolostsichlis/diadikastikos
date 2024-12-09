#include <stdio.h>

void GetTime(long SysSecs, int *hours, int *minutes, int *seconds);

int main ()
{
    //Input message
    long SysSecs;
    printf("Enter Device Secs: ");
    scanf("%ld",&SysSecs);

    //Activating Function
    int hour, minute, second;
    GetTime(SysSecs, &hour, &minute, &second);

    //Output Message
    printf("Time is %d:%d:%d", hour, minute, second);

    return 0;
}

void GetTime(long SysSecs, int *hours, int *minutes, int *seconds)
{
    //Calculate time
    *hours=SysSecs/3600;
    int rest=SysSecs%3600;
    *minutes=rest/60;
    *seconds=rest%60;
}
