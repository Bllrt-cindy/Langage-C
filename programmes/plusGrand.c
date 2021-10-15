#include <stdio.h>

int main(void)
{
    int first = 0; // Je déclare mes variables
    int second = 0;
    int third = 0;

    printf("Je suis un petit programme qui permmet de faire ressortir la valeur la plus haute saisis.\n");
    printf("Choisissez 3 Entiers. \n Quel est le premier chiffre ?\n"); // Introduction
    scanf("%i", &first); // Je récupère la valeur saisi et l'assigne à ma variable 1
    printf("Quel est le deuxième chiffre ?\n");
    scanf("%i", &second); // Je récupère la valeur saisi et l'assigne à ma variable 2
    printf("Quel est le troisième chiffre ?\n");
    scanf("%i", &third); // Je récupère la valeur saisi et l'assigne à ma variable 3

    if (first > second && first > third) // Si ma première variable est supérieur aux deux autres,
    {
        printf("%i est la valeur la plus élevée.\n", first); // J'affiche qu'elle est la plus élevée.
    }
    else if (second > first && second > third)  // Autrement Si ma deuxième variable est supérieur aux deux autres,
    {
        printf("%i est la valeur la plus élevée.\n", second); // J'affiche qu'elle est la plus élevée.
    }
    else // sinon,
    {
        printf("%i est la valeur la plus élevée.\n", third); // j'en déduis que c'est l'autre valeur la plus grande.
    }
}