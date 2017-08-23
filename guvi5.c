#include<stdio.h>

int main()
{
    int n, i, s=0;

    printf("\n\nEnter Sum of 1 to your wish\t:\t");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        s = s + i;
    }
    printf("\n\n\tSum of less than %d Result\t:\t%d\n\n", n, s);

    return 0;
}
