/*
B4 Урок 5 ДЗ 2

Ровно три цифры
Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.

Данные на входе:    Целое положительное число
Данные на выходе:   Одно слово: YES или NO

Пример №1
Данные на входе:    123
Данные на выходе:   YES

Пример №2
Данные на входе:    1234
Данные на выходе:   NO
*/
#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number:\n");
    scanf("%d",&a);
    if (a>99&&a<1000)
            printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

