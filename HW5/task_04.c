/*
    B11 ДЗ 5
Перевернуть число
Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.

Данные на входе:    Целое неотрицательное число
Данные на выходе:   Целое неотрицательное число наоборот

Пример №1
Данные на входе:    1234
Данные на выходе:   4321

Пример №2
Данные на входе:    782
Данные на выходе:   287
*/

#include <stdio.h>

int main()
{
    int a,x=0;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while (a>0)
    {
        x=x*10+a%10;
        a = a / 10;
    }
        printf("%d",x);
    return 0;
}
