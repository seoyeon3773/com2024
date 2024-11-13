#include <stdio.h>
int main(void) {
    int a,b,c;
    printf("입력할 자료:");
    scanf("%*d %d %u %i", &a, &b, &c);
    printf("a = %d b=%u c=%i \n\n",a,b,c);

    scanf("%3d %4d %2d", &a, &b, &c);
    printf("a = %d b = %d c = %d \n", a, b, c);
}
