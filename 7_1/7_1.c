#include <stdio.h>

void shell_sort(int *m, int size) {
    for (int s = size / 2; s > 0; s /= 2) {
        for (int i = s; i < size; ++i) {
            for (int j = i - s; j >= 0 && m[j] > m[j + s]; j -= s) {
                int temp = m[j];
                m[j] = m[j + s];
                m[j + s] = temp;
            }
        }
    }
}
