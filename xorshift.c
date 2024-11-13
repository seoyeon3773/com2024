#include <stdio.h>
#include <stdint.h>

// XORSHIFT 난수 생성기 함수
uint32_t xorshift32(uint32_t *state) {
    uint32_t x = *state;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    *state = x;
    return x;
}

int main() {
    uint32_t seed = 2463534242; // 초기 시드 설정
    uint32_t number;
    int guess;
    int attempts = 0;

    // 1부터 100 사이의 난수 생성
    number = (xorshift32(&seed) % 100) + 1;

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
