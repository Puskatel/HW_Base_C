/*
   F16 ДЗ 
Клетки
Известно, что шахматная доска имеет размерность 8х8 и состоит из клеток 2х цветов, например, черного и белого (см. рисунок). Каждая клетка имеет координату, состоящую из буквы и цифры. Горизонтальное расположение клетки определяется буквой от A до H, а вертикальное – цифрой от 1 до 8. Заметим, что клетка с координатой А1 имеет черный цвет. Требуется по заданной координате определить цвет клетки.

Данные на входе: 	В единственной строке записана координата клетки на шахматной доске: всего два символа – буква и цифра (без пробелов). 
Данные на выходе: 	В выходной файл нужно вывести «WHITE», если указанная клетка имеет белый цвет и «BLACK», если она черная. 

Пример №1
Данные на входе: 	C3 
Данные на выходе: 	BLACK 

Пример №2
Данные на входе: 	G8 
Данные на выходе: 	WHITE 
*/ 

#include <stdio.h>

int main() {
    char letter;
    int number;

    // Ввод координат клетки
    printf("Введите координату клетки (буква и цифра без пробелов): ");
    scanf("%c%d", &letter, &number);

    // Проверка цвета клетки
    if ((letter - 'A' + number) % 2 == 0) {
        printf("WHITE\n");
    } else {
        printf("BLACK\n");
    }

    return 0;
}
