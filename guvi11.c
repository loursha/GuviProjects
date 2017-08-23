#include<stdio.h>

int main()
{
    int n, a[100], min, max, i;

    printf("\nEnter the Size of an Array\t:\t");
    scanf("%d", &n);
    printf("\nEnter the %d elements One by one\n\n\t", n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];

    for(i=1; i<n; i++)
    {
        if(min>a[i])
             min = a[i];
        else if(max<a[i])
            max = a[i];
    }

    printf("\n\tMinimum of an Array\t:\t%d", min);
    printf("\n\n\tMaximum of an Array\t:\t%d\n\n", max);

    return 0;
}
