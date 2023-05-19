#include <stdio.h>
#include "7.h"

int main() {
    printf("Enter string: ");
    char* str = readString();
    if (str != NULL) {
        printf("Result: %s\n", str);
        free(str);  // освобождение памяти
    }
    return 0;
}