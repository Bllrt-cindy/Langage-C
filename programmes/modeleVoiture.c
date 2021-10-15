#include <stdio.h>
#include <string.h>

int main(void)
{
    // Open CSV file
    FILE *file = fopen("modeleVoiture.csv", "a"); // je crée un doc modeleVoiture . fopen = envoie pointeur vers ce fichier
    // premier argument est le nom du fichier, le deuxième est soit r, soit w, soit a, ...
    if (!file) // si le doc existe pas il va le créer
    {
        return 1;
    }

// Obtenir les noms de voiture et les numéros de plaque
    char nom[100];
    char number[100];

    printf("Entrez le nom du modèle de voiture\n");
    scanf("%s", nom);
    printf("Entrez le numéro de plaque de la voiture\n");
    scanf("%s", number);

    //Ecrire dans le fichier csv
    fprintf(file, "%s, %s\n", nom, number); // f = fichier, écrire dans un fichier
    //fermer le fichier csv
    fclose(file);

}