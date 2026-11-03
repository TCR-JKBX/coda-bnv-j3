#include <stdio.h>

int main()
{
    char symbol;

    printf("Choisissez un symbole (+, -, /, * ou %%):\n");
    scanf(" %c", &symbol);

    if (symbol == '+')
    {
        printf("C'est une addition\n");
    }
    else if (symbol == '-')
    {
        printf("C'est une soustraction\n");
    }
    else if (symbol == '*')
    {
        printf("C'est une multiplication\n");
    }
    else if (symbol == '/')
    {
        printf("C'est une division\n");
    }
    else if (symbol == '%')
    {
        printf("C'est un modulo\n");
    }
    else
    {
        printf("Cette opération n'existe pas\n");
    }

    return 0;
}
