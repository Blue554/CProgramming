#include <stdio.h>
#include <time.h>
int main(void)
{
time_t start, end; // time_t는 unsigned long과 동일하다.
start = time(NULL); // 시작 시간을 저장한다.
printf("10초가 되면 아무 키나 누르세요\n"); // 10초를 알려준다.
while (1) {
if (getchar())          // 아무 키나 누르면
break;                  // 무한 루프를 빠져나간다.
}
printf("종료되었습니다.\n");        // 종료되었음을 알려준다.
end = time(NULL);                   // 종료 시간을 저장한다.
printf("경과된 시간은 %ld 초입니다. \n", end - start);  // 경과 시간을 출력한다.
return 0;
}
