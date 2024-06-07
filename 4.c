#include <stdio.h>

int main(void) {
    int a=32769;
    int d=-10;
    
    printf("부호 있는 정수 a_1=%-10i \t", a);
    printf("부호 없는 정수 a_1=%10ld \n\n", a);

    printf("부호 없는 정수 d=%+-10u \t 부호 있는 정수 d=%+-10i \n", d, d);
    printf("부호 없는 정수 d=%10u \t 부호 있는 정수 d=%10i \n", d, d);
}