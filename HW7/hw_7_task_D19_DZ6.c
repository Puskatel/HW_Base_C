/*
    D19 ДЗ 6
Сколько раз встречается символ "a"
	Дана строка из английских символов, пробелов и знаков препинания. 
	В конце строки символ точка. 
	Необходимо реализовать рекурсивную функцию, которая считывает данную строку со стандартного потока ввода 
	и возвращает целое число - количество символов 'a' в данной строке.
int acounter(void)
Используя данную функцию решить задачу.

Данные на входе: 	Строка состоящая из английских букв, пробелов и знаков препинания. В коне строки символ '.' 
Данные на выходе: 	Одно целое число. 

Пример №1
Данные на входе: 	abcd a. 
Данные на выходе: 	2 

Пример №2
Данные на входе: 	Hello world. 
Данные на выходе: 	0 

*/
  
#include <stdio.h>

int acounter(void) {
    char c = getchar(); // Считываем один символ
    if (c == '.') {
        return 0; // Если символ точка, завершаем работу функции
    }
    int count = 0; // Инициализируем счетчик для текущего символа
    if (c == 'a') {
        count = 1; // Если символ 'a', устанавливаем счетчик в 1
    }
    // Иначе count остается равным 0
    return count + acounter(); // Возвращаем сумму для текущего символа и результат рекурсивного вызова
}

int main() {
    printf("Enter string and point end:\n");
    int count = acounter();
    printf("Quanity of symbols 'a': %d\n", count);
    return 0;
}



