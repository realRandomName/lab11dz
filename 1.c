#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define SIZE 10


int main()
{
    setlocale(LC_CTYPE, "RUS");
    int arr[SIZE], i;
    int min, max, sum = 0;

    for (i = 0; i < SIZE; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    min = max = arr[0];
    for (i = 1; i < SIZE; i++)
    {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }



    for (i = 0; i < SIZE; i++)
    {
        if (arr[i] != min && arr[i] != max)
        {
            sum += arr[i];
        }
    }
    printf("Минимальный элемент: %d\n", min);
    printf("Максимальный элемент: %d\n", max);
    printf("Сумма элементов = %d\n", sum);

    return 0;
}
