#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

long double Sigma(float x)
{
    int i = 1;
    long double sum = 0;
    for (; i <= 100; i++)
    {
        sum = sum + (pow(x, i) / i);
    }
    return sum;
}
int main()
{
    clock_t a, b;
    float d;
    long double e;
    scanf("%f", &d);
    a = clock();
    e = 1 + Sigma(d);
    printf("%Lf", e);
    b = clock();
    printf("\n");
    printf("%f", (((float)(b - a))/CLK_TCK));
}