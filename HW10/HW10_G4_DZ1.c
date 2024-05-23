/*
    G4 ДЗ 1
По одному разу
В файле .txt даны два слова не более 100 символов каждое, разделенные одним пробелом.
Найдите только те символы слов, которые встречаются в обоих словах только один раз.
Напечатайте их через пробел в файл .txt в лексикографическом порядке.

Данные на входе:    Два слова из маленьких английских букв через пробел. Длинна каждого слова не больше 100 символов.
Данные на выходе:   Маленькие английские буквы через пробел.

Пример №1
Данные на входе:    hello world
Данные на выходе:   o


Данные на входе:    aabcd bcef
Данные на выходе:   b c


*/

#include <stdio.h>
#include <string.h>

char* findUniqueChars(char* word1, char* word2) {
    int count[26] = {0};
    static char result[26];
    int index = 0;

    for (int i = 0; i < strlen(word1); i++) {
        count[word1[i] - 'a']++;
    }

    for (int i = 0; i < strlen(word2); i++) {
        if (count[word2[i] - 'a'] == 1) {
            result[index++] = word2[i];
        }
    }

    result[index] = '\0';

    return result;
}

int main() {
    FILE *file = fopen("G4_DZ1.txt", "r");
    if (file == NULL) {
        printf("Error open file.\n");
        return 1;
    }

    char word1[101], word2[101];
    fscanf(file, "%s %s", word1, word2);
    fclose(file);

    printf("Read words: %s %s\n", word1, word2);

    char* uniqueChars = findUniqueChars(word1, word2);

    printf("letter match: %s\n", uniqueChars);

    FILE *output = fopen("G4_DZ1.txt", "a");
    fprintf(output, "%s\n", uniqueChars);
    fclose(output);

    return 0;
}
