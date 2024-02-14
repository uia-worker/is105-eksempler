#include <stdio.h>
void stack_overflow(int i) {
    printf("%d\n", i);
    stack_overflow(i + 1);
}

int main() {
    stack_overflow(0);
    return 0;
}
