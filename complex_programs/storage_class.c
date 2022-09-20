// Simple program for storage class.
// Developed by Arpit

#include <stdio.h>

extern int resp = 0;

void f(void) {
    static int called = 0;
    printf("f called %d\n", called);
    called++;
    resp = resp + called;
}

int main() {
    
    auto int i = 1;
    const int limit = 10;
    for (i=1; i<limit; i++) {
        printf("local = %d, reps global = %d\n", i, resp);
        f();
    }

    return 0;
}