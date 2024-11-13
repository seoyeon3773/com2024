#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess;
    int attempts = 0;

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));
    number = rand() % 100 + 1; // 1부터 100 사이의 난수 생성

    printf("1부터 100 사이의 숫자를 맞혀보세요!\n");

    do {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("너무 큽니다!\n");
        } else if (guess < number) {
            printf("너무 작습니다!\n");
        } else {
            printf("정답입니다! %d번 만에 맞췄습니다!\n", attempts);
        }
    } while (guess != number);

    return 0;
}
