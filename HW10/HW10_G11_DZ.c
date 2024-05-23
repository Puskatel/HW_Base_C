/*
    G11
Заканчивается на a
В файле G11_DZ_in.txt дано предложение.
Необходимо определить, сколько слов заканчиваются на букву 'а'.
Ответ записать в файл G11_DZ_out.txt.

Данные на входе:    Строка из английских букв и пробелов не более 1000 символов.
Данные на выходе:   Одно целое число

Пример
Данные на входе:    Mama mila ramu
Данные на выходе:   2
*/

#include <stdio.h>
#include <string.h>

int countWordsEndingWithA(char* sentence) {
    int count = 0;
    int len = strlen(sentence);
    int i = 0;

    while (i < len) {
        // Пропускаем пробелы и другие символы, не являющиеся буквами
        while (i < len && (sentence[i] < 'a' || sentence[i] > 'z') && (sentence[i] < 'A' || sentence[i] > 'Z')) {
            i++;
        }

        // Начинаем считать слово
        int start = i;
        while (i < len && ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z'))) {
            i++;
        }

        // Проверяем, заканчивается ли слово на 'a'
        if (i > start && (sentence[i - 1] == 'a' || sentence[i - 1] == 'A')) {
            count++;
        }
    }

    return count;
}

int main() {
    FILE *file = fopen("G11_DZ_in.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char sentence[1001];
    fgets(sentence, 1001, file);
    fclose(file);

    printf("Input: %s\n", sentence);

    int wordsEndingWithA = countWordsEndingWithA(sentence);

    printf("Output: %d\n", wordsEndingWithA);

    FILE *output = fopen("G11_DZ_out.txt", "w");
    fprintf(output, "%d", wordsEndingWithA);
    fclose(output);

    return 0;
}
