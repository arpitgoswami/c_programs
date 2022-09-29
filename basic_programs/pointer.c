// Simple program for the pointers.

#include <stdio.h> 

int main() {

    int u = 3;
    int v;

    int *pu;
    int *pv;

    pu = &u;
    v = *pu;
    pv = &v;
    printf("\nu = %d & &u = %d pu = %d, u, &u, pu, *pu");
    printf("\n\nv = %d & v = %x pv = %x *pv = %d, v, &v, pv, *pv");

    return 0;
}
