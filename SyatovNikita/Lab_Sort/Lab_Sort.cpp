﻿// Сортировка выбором
//
#include <stdio.h>
#include <stdlib.h>

int selection_sort(float arr[], int size)
{
    int i, j, min, tmp, index;
    index = 0;
    for (j = 0; j < size - 1; j++)
    {
        min = arr[j];
        for (i = j; i < size - 1; i++)        //нахождение минимального элемента
            if (min > arr[i + 1])
            {
                min = arr[i + 1];
                index = i + 1;
            }
        tmp = arr[j];                 //перестановка
        arr[j] = min;
        arr[index] = tmp;
    }
    return 0;
}

void randomArr(float arr[], int size)       // генерация массива
{
    int t;
    for (t = 0; t < size; t++)
    {
        arr[t] = rand() % 100;
        printf("%f\t", arr[t]);
    }
}

void main()
{
    int n, k;
    float a[10];
    n = 10;
    randomArr(a, n);
    selection_sort(a, n);

    printf("\n");
    for (k = 0; k < 10; k++)
        printf("%f\t", a[k]);
}
