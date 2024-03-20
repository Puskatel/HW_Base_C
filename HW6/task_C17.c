/*
    C17 ДЗ
Сумма цифр равна произведению

Составить логическую функцию, которая определяет, верно ли, что в данном числе сумма цифр равна произведению.

int is_happy_number(int n)

Данные на входе: 	Целое не отрицательное число 
Данные на выходе: 	YES или NO 

Пример №1
Данные на входе: 	123 
Данные на выходе: 	YES 

Пример №2
Данные на входе: 	528 
Данные на выходе: 	NO

*/ 
 
#include <stdio.h>

int is_happy_number(int n)
{
	int i=10;
	while (n>i)
	{
		int num;
		int sum = 0;
		int mul = 1;
		num = n;
		while(num != 0) 
		{
			sum += num % 10;
			mul *= num % 10;
			num /= 10;
		}
		if (sum == mul)
		{
		   printf("YES\n");
		   break;
		}
		else
		{
		   printf("NO\n");
		   break;
		}
		  
		  i++;
	}
	return n;			
}

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    is_happy_number(a);
    return 0;
}
