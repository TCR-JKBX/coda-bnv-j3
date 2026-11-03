#include <stdio.h>

int main()
{
    char mot[50];

    printf("Saisissez un mot :\n");
    scanf("%49s", mot);

    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", mot);
    }

    return 0;
}
