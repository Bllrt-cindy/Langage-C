#include <stdio.h>

void swap(int *a, int *b); // Je déclare que ma fonction swap existe

int main(void)
{
    int first = 0; // Je déclare les variables qui me seront utiles
    int second = 0;

    printf("Je suis un petit programme d'échange de chiffre. Donnez-moi deux valeurs, et je les échangerai ! \n"); // petite introduction
    printf("Quel est le premier chiffre ?\n");
    scanf("%d", &first); // Je récupère le premier chiffre saisi par l'utilisateur et l'assigne à ma première variable
    printf("Quel est le deuxième chiffre ?\n");
    scanf("%d", &second);// Je récupère le deuxième chiffre saisi par l'utilisateur et l'assigne à ma deuxième variable

    printf("Le premier chiffre est %d et le deuxième est %d\n", first, second); // J'affiche une première fois les variables
    swap(&first, &second); // J'échange les deux variables avec ma fonction
    printf("Le premier chiffre est maintenant %d et le deuxième chiffre est maintenant %d\n", first,
           second); // J'affiche le résultat final
}

void swap(int *a, int
          *b) // Fonction pour échanger deux chiffres avec 2 paramètres, je pointe les valeurs originelles pour ne pas créer de simples copies
{
    int temporaire = *a; // Variable temporaire pour aider à l'échange
    *a = *b; // J'échange la valeur a et b
    *b = temporaire; // J'enleve ma valeur b de la variable temporaire pour finakement l'échanger avec ma première valeur.
}