#include <stdio.h>

int main()
{
    int arr[100], n;
    int *ptr;
    int max, min;
    int i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ptr = arr;

    max = *ptr;
    min = *ptr;

    for (i = 1; i < n; i++)
    {
        ptr++;

        if (*ptr > max)
            max = *ptr;

        if (*ptr < min)
            min = *ptr;
    }

    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}
