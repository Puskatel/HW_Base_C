/*
    D17 ДЗ 5 ДЗ*
Функция Аккермана
Функция Аккермана определяется рекурсивно для неотрицательных целых чисел m и n следующим образом:
 
Реализуйте данную функцию по прототипу
int akkerman(int m, int n)
Данные на входе: 	Даны неотрицательные целые числа m и n 
Данные на выходе: 	Одно целое число 

Пример №1
Данные на входе: 	2 1 
Данные на выходе: 	5 

Пример №2
Данные на входе: 	2 4 
Данные на выходе: 	11 
*/


#include <stdio.h>

int akkerman(int m, int n) 
{
    if (m == 0) 
    {
      return n + 1;
    } else if (m > 0 && n == 0) 
    {
      return akkerman(m - 1, 1);
    } else if (m > 0 && n > 0) 
    {
      return akkerman(m - 1, akkerman(m, n - 1));
    }
    return 0; 
}

int main() {
    int m, n;
    printf("Enter two numbers: ");
    scanf("%d %d", &m, &n);
    printf("Result of the Ackermann function A(%d, %d) = %d\n", m, n, akkerman(m, n));
    return 0;
}

  /*
#include <stdio.h>

int ack(int m, int n) 
{
  if (m == 0) 
  {
    return n + 1;
  } 
  else if ((m > 0) && (n == 0)) 
  {
    return ack(m - 1, 1);
  } 
  else if ((m > 0) && (n > 0)) 
  {
    return ack(m - 1, ack(m, n - 1));
  }
}

int main() {
  int A;
  A = ack(1, 2);
  printf("%d", A);
  return 0;
}
*/


