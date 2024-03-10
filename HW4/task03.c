/*
    3. Найти максимальную цифру

Дано трехзначное число, напечатать максимальную цифру

Данные на входе:        Целое положительное трехзначное число
Данные на выходе:     Одна цифра

Пример
Данные на входе:       435
Данные на выходе:    5
*/
#include <stdio.h>

int main()
{
    int a, x1,x2,x3, max;
    printf("Enter the one XXX number\n");
    scanf("%d",&a);
    x1 = a%10;
    x2 = (a/10)%10;
    x3 = (a/100)%10;
    if(x1>x2&&x1>x3)
    {
        max = x1;
        printf("Max num = ");
        printf("%d",max);
    }
    else if (x2>x3)
    {
        max = x2;
        printf("Max num = ");
        printf("%d",max);
    }
    else
    {
        max = x3;
        printf("Max num = ");
        printf("%d",max);
    }
    return 0;
}

