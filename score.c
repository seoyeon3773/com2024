#include <stdio.h>

int main() {
	
    int count = 0;
    int total = 0;
    int score = 0;

    printf("학생들의 성적을 입력하세요. 음수 값이 입력되면 종료됩니다.\n");

    while (1) {
        scanf("%d", &score);
        if (score < 0)
        
            break;

        total += score;
        count++;
    }

        int average = total / count;
        printf("학생들의 평균 성적: %d\n", average);

    return 0;
}
