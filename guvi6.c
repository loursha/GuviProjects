#include<stdio.h>
#include<string.h>

int main()
{
    int c;
    char str[100];

    printf("\n\nEnter a line\t:\t");
    gets(str);

    c = strlen(str);

    printf("\n\n\tYour statement is ''%s'' Total characters\t:\t%d\n\n", str, c);

    return 0;
}
