/*
C5 ДЗ
Сумма от 1 до N
Составить функцию, которая определяет сумму всех чисел от 1 до N и привести пример ее использования.

Пример №1
Данные на входе:        Одно целое положительное число N
Данные на выходе:   Целое число - сумма чисел от 1 до N

Пример №2
Данные на входе:        100
Данные на выходе:   5050
*/

#include <stdio.h>

int summa(int num)
{
    int sum=0,i=1;
    while(i <= num)
        {
            sum += i;
            i++;
        }
    return sum;
}

int main()
{
int num;
    scanf("%d",&num);
    printf("%d",summa(num));
    return 0;
}

