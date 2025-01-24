#include <stdio.h>

void add(int *a, int *b, int *c, int *result) {
    *result = *a + *b + *c;
}

int main() {
    int x = 3, y = 4, z = 5, result;
    add(&x, &y, &z, &result);
    printf("Sum: %d\n", result);
    return 0;
}
