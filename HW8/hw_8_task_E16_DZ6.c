/*
    E16 Д3 6
Чаще других
Дан массив из 10 элементов. Определить, какое число в массиве встречается чаще всего. Гарантируется, что такое число ровно 1. 

Данные на входе: 	10 целых числе через пробел 
Данные на выходе: 	Одно число, которое встречается чаще других. 

Пример
Данные на входе: 	4 1 2 1 11 2 34 11 0 11 
Данные на выходе: 	11 
*/
  
#include <stdio.h>

int main() 
{
    int numbers[10];
    int counts[100] = {0}; // для подсчета встреч каждого числа, предполагаем, что числа не превышают 100

    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &numbers[i]);
        counts[numbers[i]]++;
    }

    int maxCount = 0;
    int mostFrequentNumber = 0;
    for (int i = 0; i < 100; i++) 
    {
        if (counts[i] > maxCount) 
        {
            maxCount = counts[i];
            mostFrequentNumber = i;
        }
    }

    printf("%d\n", mostFrequentNumber);
    return 0;
}
