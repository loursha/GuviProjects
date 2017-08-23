#include<stdio.h>

int main()
{
    char ch;

    do
    {
        printf("\n\nEnter 'Q' to exit program\t:\t");
        ch  = getchar();
        getchar();
    }
    while(ch != 'Q' && ch != 'q');

    return 0;
}
