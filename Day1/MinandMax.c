#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
int max = INT_MAX;
int min = INT_MIN;

long maxLong = LONG_MAX;
long minLong = LONG_MIN;

printf("%ld %ld",maxLong,minLong);

long x = 54;

int y = 5.00;
int a = 1000000000,b = 1000000;

float z = (long)5.149;
int c = 5.6;
printf("%f",(float)c);
}