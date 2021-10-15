#include <stdio.h>

// écrire un programme qui saisit deux entiers et affiche leur produit.
int main(void)
{

    int first = 0; // Je déclare les variables que je vais utiliser
    int second = 0;

    printf("Quel est le premier chiffre ?\n"); // Je demande à l'utilisateur de rentrer le premier chiffre
    scanf("%d", &first); // Je récupère la valeur entrée et je l'assigne à ma variable
    printf("Quel est le deuxième chiffre ?\n"); // Je demande à l'utilisateur de rentrer le deuxième chiffre
    scanf("%d", &second);

    printf("Le résultat du produit de ces deux chiffres est : %d", first * second); // Je fais le produit des deux chiffres entrés.
}