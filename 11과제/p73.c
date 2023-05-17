#include <math.h>
#include <stdio.h>
int main( void )
{
double pi = 3.1415926535;           // 원주율
double x, y;                        // 각도, 삼각함수값
x = pi / 2;                        // 90도
y = sin( x );                       // sin(90도)
printf( "sin( %f ) = %f\n", x, y ); // sin(90도) 출력
y = cos( x );                       // cos(90도)
printf( "cos( %f ) = %f\n", x, y ); // cos(90도) 출력
} 
