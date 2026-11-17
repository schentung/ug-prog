#include <stdio.h>
int main(void) {
    int a;
    int b;
    a = 421;
    b = 4;
    
    int op1 = a - b;
    int op2 = a + b;
    int op3 = a / b;
    int op4 = a * b;
    
    printf("%d\n%d\n%d\n%d\n", op1, op2, op3, op4);
    return 0;
}