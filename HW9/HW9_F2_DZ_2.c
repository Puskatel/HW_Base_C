/*
   F2 ДЗ 2
Четные в начало.
Написать функцию и программу, демонстрирующую работу данной функции,
которая ставит в начало массива все четные элементы,
а в конец – все нечетные.
Не нарушайте порядок следования чисел между собой.
Строго согласно прототипу:
void sort_even_odd(int n, int a[])

Данные на входе:    Функция принимает на вход целые числа
Данные на выходе:   Отсортированный исходный массив

Пример №1
Данные на входе:    20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Данные на выходе:   20 18 16 14 12 10 8 6 4 2 19 17 15 13 11 9 7 5 3 1

Пример №2
Данные на входе:    1 0 1 0 1
Данные на выходе:   0 0 1 1 1
*/


#include <stdio.h>

void sort_even_odd(int a[], int n) {
    int i, j = 0;
    int temp[n];

    // Заполняем временный массив четными числами
    for (i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            temp[j++] = a[i];
        }
    }

    // Заполняем временный массив нечетными числами
    for (i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            temp[j++] = a[i];
        }
    }

    // Копируем временный массив обратно в исходный
    for (i = 0; i < n; i++) {
        a[i] = temp[i];
    }
}

int main() {
    int n = 0, i;
    int a[100]; // Предполагаем, что массив не будет больше 100 элементов

    // Ввод элементов массива
    printf("Введите элементы массива (через пробел или перенос строки):\n");
    while (scanf("%d", &a[n]) == 1) {
        n++;
    }

    // Сортировка массива
    sort_even_odd(a, n);

    // Вывод отсортированного массива
    printf("Отсортированный массив:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}

