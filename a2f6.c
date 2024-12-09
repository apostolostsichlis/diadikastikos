#include <stdio.h>

#define MAX_SIZE 100


int readData(int array[]);
void findMinMax(int array[], int size, int *min, int *max);

int main()
 {
    int array[MAX_SIZE];
    int size, min, max;

    size = readData(array);
    if (size == 0) {
        printf("No valid numbers were entered.\n");
        return 0;
    }

    findMinMax(array, size, &min, &max);

    printf("The range of values is %d-%d\n", min, max);

    return 0;
}

void findMinMax(int array[], int size, int *min, int *max)
 {
    *min = array[0];
    *max = array[0];

    for (int i = 1; i < size; i++)
        {
        if (array[i] < *min)
        {
            *min = array[i];
        }
        if (array[i] > *max)
        {
            *max = array[i];
        }
        }
 }

 int readData(int array[]) {
    int value, i = 0;
    printf("Enter the elements of the array, one per line.\n");
    printf("Use -1 to signal the end of the list.\n");

    while (1) {
        printf("? ");
        scanf("%d", &value);
        if (value == -1) {
            break;
        }
        if (i < MAX_SIZE) {
            array[i] = value;
            i++;
        }
    }
    return i;
}
