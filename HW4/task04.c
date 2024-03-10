/*
    4. Найти сумму максимума и минимума

Напечатать сумму максимума и минимума.

Данные на входе:     Пять целых чисел через пробел
Данные на выходе:    Одно целое число - сумма максимума и минимума

Пример
Данные на входе:        4    15    9    56    4
Данные на выходе:     60
*/
#include <stdio.h>

int main()
{

    int a,b,c,d,e, max,min,summ;
    printf("Enter the 5 numbers:\n\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
/*Находим максимум*/
    if(a>b && a>c && a>d && a>e)
    {
        max = a;
        printf("\nMax num = ");
        printf("%d\n",max);
    }
    else if (b>c && a>d && b>e)
    {
        max = b;
        printf("\nMax num = ");
        printf("%d\n",max);
    }
    else if (c>d && c>e)
    {
        max = c;
        printf("\nMax num = ");
        printf("%d\n",max);
    }
    else if (d>e)
    {
        max = d;
        printf("\nMax num = ");
        printf("%d\n",max);
    }
    else
    {
        max = e;
        printf("\nMax num = ");
        printf("%d\n",max);
    }
/*Находим минимум*/
    if(a<b && a<c && a<d && a<e)
    {
        min = a;
        printf("Min num = ");
        printf("%d\n",min);
    }
    else if (b<c && b<d && b<e)
    {
        min = b;
        printf("Min num = ");
        printf("%d\n",min);
    }
    else if (c<d && d<e)
    {
        min = c;
        printf("Min num = ");
        printf("%d\n",min);
    }
    else if (d<e)
    {
        min = d;
        printf("Min num = ");
        printf("%d\n",min);
    }
    else
    {
        min = e;
        printf("Min num = ");
        printf("%d\n",min);
    }
/*Находим сумму максимального и минимального числа*/
    summ = max+min;
    printf("Summ num = ");
    printf("%d\n\n",summ);


/*После 4ДЗ, уведел пример - Наибольшее из 4-х чисел:
    int a, b, c, d, e, max;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    max =  a > b ?  a : b;
    max = max> c ? max: c;
    max = max> d ? max: d;
    printf("%d", max);

    Решаю на осноге него*/

    int maxExmpl,minExmpl,SummExmpl;

    maxExmpl =  a > b ?  a : b;
    maxExmpl = maxExmpl> c ? maxExmpl: c;
    maxExmpl = maxExmpl> d ? maxExmpl: d;
    maxExmpl = maxExmpl> e ? maxExmpl: e;

    minExmpl =  a < b ?  a : b;
    minExmpl = minExmpl< c ? minExmpl: c;
    minExmpl = minExmpl< d ? minExmpl: d;
    minExmpl = minExmpl< e ? minExmpl: e;
    printf("maxExmpl = %d\n", maxExmpl);
    printf("minExmpl = %d\n", minExmpl);

    SummExmpl = maxExmpl+minExmpl;
    printf("maxSummExmpl = %d\n", SummExmpl);
    return 0;
}


