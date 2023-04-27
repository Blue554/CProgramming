#include <stdio.h>
int get_tax(int income);
 
int main(void)
{
    int income;
 
    printf("소득을 입력하시오(만원) : ");
    scanf_s("%d", &income);
 
    int result;
    result = get_tax(income);
 
    printf("소득세는 %d입니다.", result);
    return 0;
}
 
int get_tax(int income)
{
    if (income > 1000)
        return (1000 * 0.08) + (income - 1000) * 0.1;
    else if (income <= 1000)
        return income * 0.08;
}
