 /*
    6. Above, less, equal
Ввести два числа.
    Если первое число больше второго, то программа печатает слово Above.
    Если первое число меньше второго, то программа печатает слово Less.
    А если числа равны, программа напечатает сообщение Equal.
Данные на входе:        Два целых числа
Данные на выходе:   Одно единственное слово: Above, Less, Equal
Пример №1
Данные на входе:        24 24
Данные на выходе:   Equal
Пример №2
Данные на входе:      100 0
Данные на выходе:    Above
*/

#include <stdio.h>

int main()
{
    int a, b;
    /*string Above, Less, Equal,Result;*/
    printf("Enter two numbers:\n\n");
    scanf("%d%d", &a, &b);
    if(a>b)
    {
        printf("Above");
    }
    else if (a<b)
    {
        printf("Less");
    }
    else
    {
        printf("Equal");
    }
    return 0;
}

