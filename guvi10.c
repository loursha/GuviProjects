#include<stdio.h>
//#include<string.h>

int main()
{
    int i, j;
    char str1[100], str2[100];

    printf("\nEnter the First String\t:\t");
    scanf("%s", &str1);
    printf("\nEnter the Second String\t:\t");
    scanf("%s", &str2);

    for(i=0; str1[i] != '\0'; i++);

    //i = strlen(str1);

    for(j=0; str2[j] != '\0'; i++, j++)
    {
        str1[i] = str2[j];
    }
    str1[i] = '\0';

    printf("\n\n\tConcat String\t:\t%s\n\n", str1);
    return 0;
}
