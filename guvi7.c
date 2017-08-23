#include<stdio.h>

int main()
{
    int a, b;

    printf("\n\nEnter the two Integer for Swapping\t\t:\t");
    scanf("%d%d", &a, &b);

    printf("\n\n\tBefore Swapping\t:\t%d\t%d", a, b);

    a = (a+b) - (b = a);

    printf("\n\n\tAfter Swapping\t:\t%d\t%d\n\n\n", a, b);

    return 0;
}
