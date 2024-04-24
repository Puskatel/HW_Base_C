/*
    E13 ДЗ 5
Вторая с конца ноль 
Считать массив из 10 элементов и отобрать в другой массив все числа, у которых вторая с конца цифра (число десятков) – ноль. 

Данные на входе: 	10 целых чисел через пробел. 
Данные на выходе: 	Целые числа через пробел, у которых вторая с конца цифра - ноль 

Пример
Данные на входе: 	40 105 203 1 14 1000 22 33 44 55 
Данные на выходе: 	105 203 1 1000 
*/
  
#include <stdio.h>

#define ARRAY_SIZE 10

int main() 
{
    int inputArray[ARRAY_SIZE];
    int outputArray[ARRAY_SIZE];
    int outputIndex = 0;

    // Ввод массива
    printf("Inter 10 numbers: ");
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        scanf("%d", &inputArray[i]);
    }

    // Отбор чисел с нулем на втором месте с конца
    for (int i = 0; i < ARRAY_SIZE; i++) 
    {
        int num = inputArray[i];
        int tensDigit = (num / 10) % 10;
        if (tensDigit == 0) 
        {
            outputArray[outputIndex] = num;
            outputIndex++;
        }
    }

    // Вывод отобранных чисел
    printf("Result:          ");
    for (int i = 0; i < outputIndex; i++) 
    {
        printf("%d ", outputArray[i]);
    }
    return 0;
}
