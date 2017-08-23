#include<stdio.h>
//#include<string.h>

int main()
{
    int i;
    char ch[100];

    printf("\n\nEnter String...\n\n\tExample ''asd123!@#''\t:\t");
    scanf("%s", &ch);

    for(i=0; ch[i] != '\0'; i++);
    //i = strlen(ch);

    printf("\n\n\tLength of String\t:\t%d\n\n", i);

    return 0;
}
