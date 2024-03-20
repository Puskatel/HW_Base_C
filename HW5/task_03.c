/*
    B9 Урок 5 ДЗ 3
Все цифры четные
Ввести целое число и определить, верно ли, что все его цифры четные.
Данные на входе:    Одно целое число
Данные на выходе:   YES или NO

Пример №1
Данные на входе:    2684
Данные на выходе:   YES

Пример №2
Данные на входе:        2994
Данные на выходе:   NO

*/
#include <stdio.h>

int main()
{
    int a,x,flag;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while (a>0)
    {
        x = a%10;
        if (x%2 == 0)
            flag=1;
        else
        flag=0;
    a = a / 10;
    }
    if (flag == 1)
        printf("YES\n");
        else
        printf("NO ");
    return 0;
}

