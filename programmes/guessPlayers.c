#include <stdio.h>


int main(void)
{
    int combienDeFois = 0, choix = 0, nombreMystere = 2; // J'entre les variables qui me seront utiles
    int commencer = 1; // Cette variable me servira pour vérifier une condition
    char joueur1[100]; // je crée deux tableau assez grand pour entrer n'importe quel nom
    char joueur2[100];
    printf("Aujourd'hui je suis en bonne compagnie, et je souhaitais jouer au jeu mystère.\nLe joueur 2 choisis le nombre mystère, le joueur 1 est censé le deviner :P\n");
    printf("Qui sera le joueur 1 ?\n"); // j'introduis le jeu
    scanf(" %s", joueur1);
    printf("Qui sera le joueur 2 ?\n");
    scanf(" %s", joueur2);
    printf("\e[1;1H\e[2J");
    printf("Très bien, les informations sont à jour !\n");
    printf("%s, choisis un nombre mystère entre 1 et 20 comprit 😜 !\n", joueur2);
    scanf("%d", &nombreMystere); // Je demande à l'utilisateur d'entrer un nombre mystère !


    while (commencer == 1) // Tant que ma variable commencer est sur 1,
    {
        if (nombreMystere < 1 || nombreMystere > 20) // Si le nombre mystère n'est pas entre 1 et 20,
        {
            printf("J'attends un chiffre entier entre 1 et 20 !\n"); // Je réitère la consigne
            printf("%s, choisis un nombre mystère entre 1 et 20 comprit !\n", joueur2);
            scanf(" %d", &nombreMystere);
        }
        else // Sinon,
        {
            commencer = 0; // Je commence le jeu !
            printf("\e[1;1H\e[2J"); // Je nettoie le terminal.
            printf("Entrée prise en compte ! \n");
        }
    }


    while (nombreMystere != choix) // Tant que le nombre mystère est différent de la valeur entrée par l'utilisateur,
    {
        printf("%s, devine le nombre mystère entre 1 et 20 🤞 \n", joueur1); // je répète la consigne
        scanf(" %d", &choix); // Je récupère la nouvelle valeur choisit dans ma variable choix.
        if (choix < nombreMystere) // Je précise quoi afficher à l'utilisateur si son choix est plus petit que le nombre mystère
        {
            printf("Un peu plus !\n");
            combienDeFois++; // J'ajuste le nombre de coup
        }
        else if (choix > nombreMystere) // Je précise quoi afficher à l'utilisateur si son choix est plus grand que le nombre mystère
        {
            printf("Un peu moins !\n");
            combienDeFois++; // J'ajuste le nombre de coup
        }
    }
    printf("\e[1;1H\e[2J"); // Je félicite le joueur quand il a gagné et affiche quelques détails.
    printf("\n");
    printf("\n");
    printf("************************\n");
    printf("Bingo %s 🎉!\nTu as réussi en %d coup(s) !\n", joueur1, combienDeFois + 1);
    printf("************************\n");
    return 0; // termine la fonction main
}
