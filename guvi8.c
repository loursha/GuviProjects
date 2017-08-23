#include<stdio.h>

int main()
{
    int a[10], i, big;

    printf("\n\nEnter the 10 Elements One by One\n\n\t");

    for(i=0; i<10; i++)
    {
         scanf("%d", &a[i]);
    }

    big = a[0];

    for(i=0; i<10; i++)
    {
        if(big<a[i])
        {
            big = a[i];
        }

    }

    printf("\n\n\tBiggest value is\t:\t%d\n\n", big);

    return 0;
}
