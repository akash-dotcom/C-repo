// Swapping
#include <stdio.h>
#include <conio.h>

main()
{
    int a, b;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    swap(&a, &b);
    printf("a=%d b=%d", a, b);
}

void swap(int *x, int *y)
{

    int t;
    t = *x;
    *x = *y;
    *y = t;
}