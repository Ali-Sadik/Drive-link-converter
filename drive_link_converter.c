#include <stdio.h>
#include <string.h>

int count = 1 ;

int main()
{
    char str1[300], str2[300], str3[300];
    printf("%d.Paste your drive link here: ", count);
    gets(str1);
    printf("\n");

    for (int i = 32; i < 65; i++)
    {
        str2[i-32] = str1[i];
    }

    str2[33] = '\0';
    strcpy(str3, "https://drive.google.com/uc?export=download&id=");
    strcat(str3, str2);

    printf("%s", str3);

    printf("\n\n\n");

    count++ ;
    main();

    return 0;
}
