 /*
    10. Какое время года

Ввести номер месяца и вывести название времени года.
Данные на входе:        Целое число от 1 до 12 - номер месяца.
Данные на выходе:     Время года на английском: winter, spring, summer, autumn (используйте switch)
Пример №1
Данные на входе:        4
Данные на выходе:     spring
Пример №2
Данные на входе:      1
Данные на выходе:    winter
*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter one number 1..12:\n\n");
    scanf("%d",&a);
    switch (a)
    {
    case 1 ... 2:
        printf("winter");
        break;
    case 3 ... 5:
        printf("spring");
        break;
    case 6 ... 8:
        printf("summer");
        break;
    case 9 ... 11:
        printf("autumn");
        break;
    case 12:
        printf("winter");
        break;
    }
    return 0;
}

