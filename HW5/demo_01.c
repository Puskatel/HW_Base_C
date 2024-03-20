/*
    B1 Урок 5 Демонстрация 1
Квадраты и кубы
Ввести натуральное число вывести квадраты и кубы всех чисел от 1 до этого числа. Число не превосходит 100. 

Данные на входе: 		Одно целое число не превосходящее 100 
Для каждого из чисел от 1 до введенного числа напечатать квадрат числа и его куб. 

Пример №1
Данные на входе:		3 
Данные на выходе:	1 1 1 2 4 8 3 9 27 

Пример №2
Данные на входе:		5 
Данные на выходе:	1 1 1 2 4 8 3 9 27 4 16 64 5 25 125 

*/

#include <stdio.h>
#include <math.h>

int main()
{
	int number,counter=1,square,cube;
	printf("Enter numbers (<100) square and cube: ");
	scanf("%d", &number);
	while (counter<=number)
	{
		square = pow(counter, 2);
		cube = 	 pow(counter, 3);
		printf("%d %d %d  ",counter,square,cube);
		counter++;
	}
return 0;
}
