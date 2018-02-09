#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

double Sigma(float x)
{
    int i = 1;
    double sum = 0;
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
    double e;
    scanf("%f", &d);
    a = clock();
    e = 1 + Sigma(d);
    int z = 0;
    while (z < 100)
    {
        Sigma(d);
        z++;
    }
    printf("%6.2e", e);
    sleep(1);
    b = clock();
    printf("\n");
    printf("%f", (((float)(b - a))/CLK_TCK));
}