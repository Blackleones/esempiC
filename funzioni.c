#include<stdio.h>

int baz(int aaaa, int bbbb) {
    return aaaa + bbbb;
}

int foo(int a, int b) {
    return a + b;
}

int main() {
    int a = 2;
    int b = 3;

    int result = foo(a, b);
    int result2 = baz(a, b);
    printf("%d", result);
    return 0;
}
