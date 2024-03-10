/*
    2. Найти наибольшее из трех чисел

Ввести три числа и найти наибольшее из них

Данные на входе:        Три целых числа через пробел
Данные на выходе:   Одно наибольшее целое число

Пример
Данные на входе:    4 15 9
Данные на выходе:   15

*/
#include <stdio.h>

int main()
{
    int a,b,c, max;
    printf("Enter the III numbers A, B, C\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        max = a;
        printf("Max num = ");
        printf("%d",max);
    }
    else if (b>c)
    {
        max = b;
        printf("Max num = ");
        printf("%d",max);
    }
    else
    {
        max = c;
        printf("Max num = ");
        printf("%d",max);
    }
    return 0;
}

