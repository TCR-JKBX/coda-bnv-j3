#include <stdio.h>

int main()
{
    int nombre;

    printf("Choisissez un nombre entier :\n");
    scanf("%d", &nombre);

    if (nombre > 42)
    {
        printf("Le nombre est supérieur à 42\n");
    }
    else if (nombre == 42)
    {
        printf("Le nombre est égal à 42\n");
    }
    else
    {
        printf("Le nombre est inférieur à 42\n");
    }

    return 0;
}
