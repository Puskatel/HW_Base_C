 /*
    8. Наименьшее из пяти чисел

Ввести пять чисел и  вывести наименьшее из них
Нужно напечатать наименьшее число

Данные на входе:       Пять целых чисел разделенных пробелом
Данные на выходе:    Одно целое число

Данные на входе:      4    15    9    56    4
Данные на выходе:     4

- Беру основу из задачи №4
*/

#include <stdio.h>

int main()
{
    int a,b,c,d,e,min;
    printf("Enter 5 numbers:\n\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    min =  a < b ?  a : b;
    min =  min < c ?  min : c;
    min =  min < d ?  min : d;
    min =  min < e ?  min : e;
    printf("\nMin num = ");
    printf("%d",min);
    return 0;
}

