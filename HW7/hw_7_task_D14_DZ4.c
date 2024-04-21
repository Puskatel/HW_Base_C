/*
    D14 ДЗ 4
Все нечетные
Дана последовательность целых чисел через пробел, завершающаяся числом 0. Выведите все нечетные числа из этой последовательности, сохраняя их порядок. 
Данные на входе: 		Последовательность ненулевых целых чисел. В конце число 0. 
Данные на выходе: 	Введенная последовательность, кроме четных чисел в том же порядке. Число 0 не выводить. 

Пример
Данные на входе: 		12 13 173 28 19 0 
Данные на выходе: 	13 173 19 
*/
  

#include <stdio.h>

void oddNumbers() 
{
    int num;
    scanf("%d", &num);

    if (num != 0) 
    {
        if (num % 2 != 0) 
        {
            printf("%d ", num);
        }
        oddNumbers();
    }
}

int main() 
{
    printf("Inter some numbers and finish zero 0: ");
    oddNumbers();
    
    return 0;
}



