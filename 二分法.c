#include <stdio.h>
#include <string.h>
#define halflen ((sizeof(c)/sizeof(c[0]))/2)
char c[100000];
int recurbinary(int len,int i)
{
    if (len == 0 )
    {
        return -1;
    }

    len = len / 2;
    if (c[len] == i)
        return (len);
    else if (c[len] > i)
        recurbinary(len / 2, i);
    else if (c[len] < i)
        recurbinary(halflen + (len / 2), i);
}
int main()
{
    for ( int i = 0; i < 100000; i++)
    {
        c[i] = i;
    }
    int len;
    len = sizeof(c)/sizeof(c[0]);
    int b,d;
    scanf("%d", &b);
    d = recurbinary(len, b);
    printf("%d", d);
}