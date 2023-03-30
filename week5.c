```c
#include <stdio.h>
int main(void)
{
 int a,b;
 scanf("%d %d",&a,&b);
    if(a>b){
        printf(">");
    }else if(a<b){
        printf("<");
    }else if(a==b){
        printf("==");
    }else {
     printf("알 수 없는 오류입니다");
    }
    return 0;
}
```
