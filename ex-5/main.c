#include <stdio.h>

int main()
{
    char symbole;
    int nombre;

    printf("Choisissez un symbole (+ ou -) :\n");
    scanf(" %c", &symbole);

    printf("Choisissez un nombre différent de 0 :\n");
    scanf("%d", &nombre);

    if (symbole == '+')
    {
        for (int i = 0; i <= nombre; i++)
        {
            printf("%d\n", i);
        }
    }
    else if (symbole == '-')
    {
        for (int i = nombre; i >= 0; i--)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Le symbole n'est pas reconnu.\n");
    }

    return 0;
}
