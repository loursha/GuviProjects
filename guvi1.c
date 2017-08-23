#include<stdio.h>

int main()
{
    int i, m, n;

    printf("\n\nEnter the Interval\t:\t");
    scanf("%d%d", &m, &n);

    if(m%2 == 1)
    {
        printf("\n\nEven Numbers %d between %d are\t:", m, n);
        m+=1;
        for(i=m; i<=n-1; i+=2)
        {
            printf("\t%d", i);
        }
    }
    else if(m%2 == 0)
    {
        printf("\n\nEven Number %d between %d are\t:", m, n);
        for(i=m+2; i<=n-1; i+=2)
        {
            printf("\t%d", i);
        }
    }
    return 0;
}
