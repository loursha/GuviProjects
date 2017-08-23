#include<stdio.h>
#include<math.h>

int main()
{
    int a, b, n, r, s=0, i, l;

    printf("\n\n\t\t*****\tArmstrong Number\t*****\n\n");
    printf("\nEnter the Start Range\t:\t");
    scanf("%d", &a);
    printf("\nEnter the End Range\t:\t");
    scanf("%d", &b);
    printf("\n\nArmstrong range %d between %d\n\n", a, b);

    for(i=a; i<=b;)
    {
        n = i;
        s = 0;

        //l = (int) log10(n) + 1;

        while(n>0)
        {
            r = n%10;
            s = s + r*r*r;
            n = n/10;
        }
        if(i == s)
        {
            printf("\t%d", i);
        }
        i++;

    }
    printf("\n\n");
    return 0;
}
