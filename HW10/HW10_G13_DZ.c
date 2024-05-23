/*
    G13
Изменить расширение
В файле DZ_G13_in.txt записан полный адрес файла (возможно, без расширения). Необходимо изменить его расширение на ".html" и записать результат в файл DZ_G13_out.txt.

Данные на входе:    Строка состоящая из символов: a-z, A-Z, 0-9, /
Данные на выходе:   Исходная строка с измененным расширением.

Пример №1
Данные на входе:    /DOC.TXT/qqq
Данные на выходе:   /DOC.TXT/qqq.html

Пример №2
Данные на входе:    /DOC.TXT/qqq.com
Данные на выходе:   /DOC.TXT/qqq.html

*/

#include <stdio.h>
#include <string.h>

void changeExtension(char* path) {
    int len = strlen(path);
    int i = len - 1;

    // Находим индекс последнего символа '/'
    while (i >= 0 && path[i] != '/') {
        i--;
    }

    // Находим индекс последней точки после последнего '/'
    int dotIndex = -1;
    for (int j = len - 1; j > i; j--) {
        if (path[j] == '.') {
            dotIndex = j;
            break;
        }
    }

    // Если не нашли точку или точка находится после последнего '/', добавляем ".html" в конец строки
    if (dotIndex == -1 || dotIndex > len) {
        strcat(path, ".html");
    } else {
        // Меняем расширение на ".html"
        path[dotIndex] = '\0';
        strcat(path, ".html");
    }
}

int main() {
    FILE *file = fopen("DZ_G13_in.txt", "r");
    if (file == NULL) {
        printf("Error open file.\n");
        return 1;
    }

    char path[1000];
    fscanf(file, "%s", path);
    fclose(file);

    printf("Input: %s\n", path);

    changeExtension(path);

    printf("Output: %s\n", path);

    FILE *output = fopen("DZ_G13_out.txt", "w");
    if (output == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    fprintf(output, "%s\n", path);
    fclose(output);

    return 0;
}
