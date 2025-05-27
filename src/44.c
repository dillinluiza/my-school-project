#include <stdio.h>

int main() {
    int i = 5;
    while (i >= 0) {
        if (i % 2 == 1) {
            printf("Odd\n");
        } else {
            printf("Even\n");
        }
        i--;
    }
}
