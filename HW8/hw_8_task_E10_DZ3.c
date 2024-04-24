/*
    E10 ДЗ 3
Циклический сдвиг массива вправо на 4
Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4 элемента. 

Данные на входе: 	12 целых чисел через пробел 
Данные на выходе: 	12 целых чисел через пробел 

Пример №1
Данные на входе: 	4 -5 3 10 -4 -6 8 -10 1 0 5 7 
Данные на выходе: 	1 0 5 7 4 -5 3 10 -4 -6 8 -10 

Пример №2
Данные на входе: 	1 2 3 4 5 6 7 8 9 10 11 12 
Данные на выходе: 	9 10 11 12 1 2 3 4 5 6 7 8 

*/
  

#include <stdio.h>

#define SIZE 12

void cyclicShift(int arr[], int shift, int size) 
{
    int temp[size];
    for (int i = 0; i < size; i++) 
    {
        temp[(i + shift) % size] = arr[i];
    }
    for (int i = 0; i < size; i++) 
    {
        arr[i] = temp[i];
    }
}

int main() 
{
    int arr[SIZE];
    printf("Inter 12 numbers: ");
    for (int i = 0; i < SIZE; i++) 
    {
        scanf("%d", &arr[i]);
    }
    cyclicShift(arr, SIZE - 4, SIZE); // Циклический сдвиг на 4 элемента вправо
    printf("Result:           ");
    for (int i = 0; i < SIZE; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

