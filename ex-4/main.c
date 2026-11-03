#include <stdio.h>

int main()
{
    int nombre;

    printf("Saisissez un nombre différent de 0 :\n");
    scanf("%d", &nombre);

    for (int i = 0; i <= nombre; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}
