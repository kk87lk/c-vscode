#include<stdio.h>
#include<time.h>
#include<math.h>
#include<Windows.h>
clock_t start, stop;
double duration;
#define MAXN 101
#define number 100000
double f1(int n, double x);
double f2(int n, double x);
double f1(int n, double x)
{
 int i;
 double p = 1;
 for (i = 1; i < n; i++)
  p += pow(x, i) / i;
 return p;
}
double f2(int n, double x)
{
 double i;
 double p = x / n-1;
 for (i = n - 1;i > 0;i--)
  p = x*(1 / (i - 1) + p);
 return p + 1;
}

int main()
{
 int i;
 start = clock();
 for (i = 0;i < number; i++)
  f1(MAXN, 1.1);
 stop = clock();
 duration = (double)(stop - start) / CLK_TCK;
 printf("ticks1=%f\n", (double)(stop - start));
 printf("duration1=%6.2e\n", duration);
 int j;
 start = clock();
 for (j = 0; j < number; j++)
  f2(MAXN, 1.1);
 stop = clock();
 duration = (double)(stop - start) / CLK_TCK;
 printf("ticks2=%f\n", (double)(stop - start));
 printf("duration2=%6.2e\n", duration);
 system("pause");
}