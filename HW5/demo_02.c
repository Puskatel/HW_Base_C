/*
	B7 Урок 5 Демонстрация 2
Две одинаковые цифры
Ввести целое число и определить, верно ли, что в его записи есть две одинаковые цифры,
НЕ обязательно стоящие рядом.

Данные на входе:		Одно целое число 
Данные на выходе:	Одно слово: YES или NO 

Пример №1
Данные на входе:		1234 
Данные на выходе:	NO 

Пример №2
Данные на входе:		1242 
Данные на выходе:	YES 
*/
  
#include <stdio.h>

int main()
{
	int numberMain,number,remainsBody,remains,flag=0;
	printf("Enter number: ");
	scanf("%d", &numberMain);
	while (numberMain>0)
	{
		remainsBody=numberMain%10;
		number=numberMain/10;
		while (number>0)
		{	remains=number%10;
/*
			printf("number :%d\n",number);
			printf("remainsMain :%d\n",remainsBody);
			printf("remains :%d\n",remains);
*/			
			if (remainsBody==remains)
			{
				flag=1;
			}
			number/=10;
		}
		numberMain/=10;
	}
	if (flag>0)
		printf("YES\n");
	else
		printf("No\n");
return 0;
}
