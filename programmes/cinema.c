#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int age; // je déclare la variable age qui me servira et qui sera un nombre entier
    char answer;
    bool filmChoisit = 0;

    string filmCategorieEnfant[3] = {"Lilo & Stitch", "Le roi lion", "Mulan"}; // je crée les tableaux contenant des films rangés par catégories
    string filmCategorieAdos[3] = {"Alice aux pays des merveilles", "Retour vers le futur", "Le Monde de Charlie"};
    string filmCategorieAdulte[3] = {"Le prestige", "Into the wild", "shutter island"};

    printf("Quel est votre âge ?\n"); // Je demande l'âge du client pour ensuite le stocker dans la variable age
    scanf("%i", &age);

    if (age < 4) // je vérifie la catégorie de film concernée par l'âge de la personne afin de lui proposer des films adaptés.
    {
        printf("Aonnn, cé two meugnonnn\n");
    }
    else if (age >= 4 && age < 11)
    {
        while (filmChoisit == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("Je vous propose d'aller voir %s\n", filmCategorieEnfant[i]);
                printf("...\n");
                answer = get_char("Cela vous convient-il ? Tapez o pour oui ou n pour non\n");
                while (answer != 'o' && answer != 'O' && answer != 'n' && answer != 'N')
                {
                    printf("Cela n'est pas une réponse ... %s vous convient-il ?", filmCategorieEnfant[i]);
                    break;
                }
                if (answer == 'o' || answer == 'O')
                {
                    printf("Très bon choix ! Voici votre ticket, je vous laisse prendre place pour %s\n", filmCategorieEnfant[i]);
                    return 0;
                }
            }
        }
    }
    else if (age >= 11 && age < 17)
    {
        while (filmChoisit == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("Je vous propose d'aller voir %s\n", filmCategorieAdos[i]);
                printf("...\n");
                answer = get_char("Cela vous convient-il ? Tapez o pour oui ou n pour non\n");
                while (answer != 'o' && answer != 'O' && answer != 'n' && answer != 'N')
                {
                    printf("Cela n'est pas une réponse ... %s vous convient-il ?", filmCategorieAdos[i]);
                    break;
                }
                if (answer == 'o' || answer == 'O')
                {
                    printf("Très bon choix ! Voici votre ticket, je vous laisse prendre place pour %s\n", filmCategorieAdos[i]);
                    return 0;
                }
            }
        }
    }
    else if (age >= 18)
    {
        while (filmChoisit == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                printf("Je vous propose d'aller voir %s\n", filmCategorieAdulte[i]);
                printf("...\n");
                answer = get_char("Cela vous convient-il ? Tapez o pour oui ou n pour non\n");
                while (answer != 'o' && answer != 'O' && answer != 'n' && answer != 'N')
                {
                    printf("Cela n'est pas une réponse ... %s vous convient-il ?", filmCategorieAdulte[i]);
                    break;
                }
                if (answer == 'o' || answer == 'O')
                {
                    printf("Très bon choix ! Voici votre ticket, je vous laisse prendre place pour %s\n", filmCategorieAdulte[i]);
                    return 0;
                }
            }
        }
    }
}