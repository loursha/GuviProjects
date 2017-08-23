#include<stdio.h>

int main()
{
    int i=0, j=0;
    char str1[100], str2[100];

    printf("\n\nEnter the First String\t:\t");
    scanf("%s", &str1);
    printf("\nEnter the Second String\t:\t");
    scanf("%s", &str2);

    while(str1[i] != '\0' && str2[i] != '\0')
    {
        if(str1[i] != str2[i])
        {
            j=1;
            break;
        }
        i++;
    }

    if(j == 0 && str1[i] == '\0' && str2[i] == '\0')
        printf("\n\n\tBoth Strings are\t:\tEquals\n");
    else
        printf("\n\n\tBoth String are\t:\tUnEqual\n");

    return 0;
}
