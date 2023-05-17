#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void disp_car(int car_number, int distance) // 자동차 출력 함수
{
  int i;                                // 반복문을 위한 변수
  printf("CAR #%d:", car_number);       // 자동차 번호 출력
  for (i = 0; i < distance / 10; i++) { // 자동차의 이동거리만큼
    printf("*");                        // * 출력
  }

  printf("\n"); // 줄바꿈
}

int main(void) {
  int i;
  int car1_dist = 0, car2_dist = 0; // 자동차의 이동거리
  srand((unsigned)time(NULL));      // 난수 초기화

  for (i = 0; i < 6; i++) {            // 6번 반복
    car1_dist += rand() % 100;         // 0~99 사이의 난수 발생
    car2_dist += rand() % 100;         // 0~99 사이의 난수 발생
    disp_car(1, car1_dist);            //  자동차 1 출력
    disp_car(2, car2_dist);            //  자동차 2 출력
    printf("---------------------\n"); //  구분선 출력
  }
  return 0;
}
