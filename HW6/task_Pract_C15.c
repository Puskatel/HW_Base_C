/*
    C15 Практ 
Цифры по возрастанию

Составить функцию логическую функцию, которая определяет, верно ли, что в заданном числе все цифры стоят по возрастанию. Используя данную функцию решить задачу.

int grow_up(int n)

Данные на входе: 		Одно целое не отрицательное число 
Данные на выходе: 	YES или NO 

Пример №1
Данные на входе: 		258 
Данные на выходе: 	YES 

Пример №2
Данные на входе: 		528 
Данные на выходе: 	NO 
*/ 
 
#include <stdio.h>

int grow_up(int n)
{
		int numLast;
		int numNext;
		while(n != 0) 
		{
			numLast=n%10;
			numNext=n/10;	
			numNext=numNext%10;	
		if ((numLast) > (numNext))
		{
			//printf("YES\n");
			//printf("n= %d\n ", n);
			//printf("numLast= %d\n ", numLast);
			//printf("numNext= %d\n ", numNext);
			n /= 10;
			//printf("n/10= %d\n ", n);
			if (n == 0)		//Если дошёл по убывающей до начала
			{
				printf("YES\n");
				break;
			}
		}
		else
		{
		   printf("NO\n");
		   break;
		}
		}
	return n;			
}

int main()
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    grow_up(a);
    return 0;
}
