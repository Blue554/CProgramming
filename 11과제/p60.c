#include<stdlib.h>
#include<stdio.h>
#include<time.h>
int coin_toss(void);                // 동전 던지기 함수 선언

int main(void)
{
    int toss;
    int heads = 0;
    int tails = 0;
    srand((unsigned)time(NULL));        // 난수 생성기 초기화

    for (toss = 0; toss < 100; toss++) {    // 100번 반복
        if(coin_toss() == 1)                // 동전 앞면이 나오면
            heads++;                        // 앞면 카운트 증가
        else
            tails++;                        // 뒷면 카운트 증가
}
    printf("동전의 앞면: %d \n", heads);    // 앞면 카운트 출력
    printf("동전의 뒷면: %d \n", tails);    // 뒷면 카운트 출력
    return 0;                               
}

int coin_toss(void)
{
    int head = rand()%2;            // 0 또는 1의 난수 생성
    return head;                    // 0 또는 1 반환
}
