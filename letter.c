#include <stdio.h>
int main(void) {
    char letter;
    letter = getchar();
    putchar(letter);
    printf("\n letter=%c, letter+3=%c \n", letter, letter+3);
    printf("letter=%d, letter+3=%d \n", letter, letter+3);
}
