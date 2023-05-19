#include <stdio.h>
#include <stdlib.h>

char* readString() {
    int bufferSize = 10;  // начальный размер буфера
    int length = 0;       // текущая длина строки
    char* buffer = malloc(bufferSize * sizeof(char));  // выделение памяти для буфера
    if (buffer == NULL) {
        printf("Error\n");
        return NULL;
    }
    char ch = getchar();
    // Считываем символы до символа новой строки или конца файла
    while (ch != '\n' && ch != EOF) {
        // Если достигнут размер буфера, увеличиваем его размер вдвое
        if (length == bufferSize) {
            bufferSize *= 2;
            char* temp = realloc(buffer, bufferSize * sizeof(char));  // изменение размера буфера
            if (temp == NULL) {
                printf("Error\n");
                free(buffer);
                return NULL;
            }
            buffer = temp;
        }
        buffer[length] = ch;
        length++;
        ch = getchar();
    }
    // Добавляем символ конца строки
    buffer[length] = '\0';
    return buffer;
}


