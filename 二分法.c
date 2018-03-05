#include <stdio.h>
#include <string.h>
#define halflen ((sizeof(c)/sizeof(c[0]))/2)
int c[100000];
int recurbinary(int *array,int len,int key)
{
    int low = 0, high = len - 1, mid;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (array[mid] == key)
            return mid;
        if (array[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    for ( int i = 0; i < 100000; i++)
    {
        c[i] = i;
    }
    int len;
    len = sizeof(c)/sizeof(c[0]);
    int b,d=-1;
    scanf("%d", &b);
    d = recurbinary(c, len, b);
    printf("%d", d);
}