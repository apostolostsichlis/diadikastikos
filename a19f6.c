#include <stdio.h>

void aver(int table[], int size, float* average, int* range);
void max_subt_average(int table[], int n, float* max_average, int* max_range, int* pos);

int main() {
    int table[10] = {20, 30, 40, 70, 30, 50, 20, 50, 30, 20};
    int N;

    printf("Insert N: ");
    scanf("%d", &N);

    float mo;
    int ma, pos;

    max_subt_average(table, N, &mo, &ma, &pos);

    printf("N=%d max_average=%.2f range=%d pos=%d\n", N, mo, ma, pos);

    return 0;
}

void max_subt_average(int table[], int n, float* max_average, int* max_range, int* pos) {
    *max_average = -1.0;
    *max_range = -1;
    *pos = -1;
    for (int i = 0; i <= 10 - n; i++)
    {
        float average;
        int range;
        aver(&table[i], n, &average, &range);
        if (average > *max_average)
        {
            *max_average = average;
            *max_range = range;
            *pos = i;
        }
    }
}

void aver(int table[], int size, float* average, int* range) {
    int sum = 0;
    int min = 99999, max = -99999;
    for (int i = 0; i < size; i++)
    {
        sum += table[i];
        if (table[i] < min) min = table[i];
        if (table[i] > max) max = table[i];
    }
    *average = (float)sum / size;
    *range = max - min;
}
