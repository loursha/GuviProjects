#include<stdio.h>

int main()
{
    int n, i;
    float avg=0, a[100];

    printf("\nEnter the size of an Array\t:\t");
    scanf("%d", &n);
    printf("\n\nEnter the %d elements\n\n\t", n);

    for(i=0; i<n; i++)
    {
        scanf("%f", &a[i]);
        printf("\n\t");
        avg = avg + a[i];
    }

    avg = avg/n;

    printf("\n\nAverage of the %d elements is %.2f\n\n", n, avg);

    return 0;
}
