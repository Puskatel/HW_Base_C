/*
    G10
Самое длинное слово
В файле G10_DZ.txt дана строка слов, разделенных пробелами. Найти самое длинное слово и вывести его в файл G10_DZout.txt.
Случай, когда самых длинных слов может быть несколько, не обрабатывать.

Данные на входе:    Строка из английских букв и пробелов. Не более 1000 символов.
Данные на выходе:   Одно слово из английских букв.

Пример
Данные на входе:    Hello beautiful world
Данные на выходе:   beautiful

*/

#include <stdio.h>
#include <string.h>

void findLongestWord(char* input) {
    char longestWord[100] = "";
    char currentWord[100] = "";
    int maxLen = 0;
    int len = 0;

    for (int i = 0; i <= strlen(input); i++) {
        if (input[i] != ' ' && input[i] != '\0') {
            currentWord[len++] = input[i];
        } else {
            currentWord[len] = '\0';
            if (len > maxLen) {
                maxLen = len;
                strcpy(longestWord, currentWord);
            }
            len = 0;
        }
    }

    printf("Input: %s\n", input);
    printf("Output: %s\n", longestWord);

    FILE *outputFile = fopen("G10_DZout.txt", "w");
    fprintf(outputFile, "%s", longestWord);
    fclose(outputFile);
}

int main() {
    FILE *inputFile = fopen("G10_DZ.txt", "r");
    if (inputFile == NULL) {
        printf("Ошибка открытия файла.\n");
        return 1;
    }

    char input[1000];
    fscanf(inputFile, "%[^\n]", input);
    fclose(inputFile);

    findLongestWord(input);

    return 0;
}
