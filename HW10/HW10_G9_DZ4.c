/*
    G9 ДЗ 4
Удалить повторяющиеся символы
В файле .txt строка из меленьких и больших английских букв, знаков препинания и пробелов.
Требуется удалить из нее повторяющиеся символы и все пробелы. Результат записать в файл .txt.

Данные на входе:    Строка из меленьких и больших английских букв, знаков препинания и пробелов. Размер строки не более 1000 сивмолов.
Данные на выходе:   Строка из меленьких и больших английских букв.

Пример
Данные на входе:    abc cde def
Данные на выходе:   abcdef
*/

#include <stdio.h>
#include <string.h>

void removeDuplicates(char* str) {
    int hash[256] = {0};
    int currentIndex = 0;
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if (str[i] != ' ' && hash[str[i]] == 0) {
            hash[str[i]] = 1;
            str[currentIndex++] = str[i];
        }
    }

    str[currentIndex] = '\0';
}

int main() {
    FILE *file = fopen("G9_DZ4.txt", "r");
    if (file == NULL) {
        printf("Ошибка открытия файла.\n");
        return 1;
    }

    char str[1001];
    fgets(str, 1001, file);
    fclose(file);

    printf("Input string: %s\n", str);

    removeDuplicates(str);

    FILE *output = fopen("G9_DZ4.txt", "w");
    if (output == NULL) {
        printf("Ошибка открытия файла для записи.\n");
        return 1;
    }

    fprintf(output, "%s", str);
    fclose(output);

    printf("Result: %s\n", str);

    return 0;
}
