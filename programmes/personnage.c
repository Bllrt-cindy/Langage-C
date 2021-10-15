#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct // struct permet de créer un élement personne. Dans cet élément personne, il y a des catégories ex ; capacités, armes, compétences ...
{
    string name;
    string age;
    string arme;
    int power;
}

person; // nom du conteneur où l'on encapsule des types de données

void combat(person people1, person people2);

int main(void)
{
    person people[3]; //chaque element de ce tableau sera une personne
    people[0].name = "Pierre";
    people[0].age = "32";
    people[0].arme = "une épée";
    people[0].power = 10;

    people[1].name = "Paul";
    people[1].age = "23";
    people[1].arme = "une hache";
    people[1].power = 15;

    people[2].name = "Jack";
    people[2].age = "18";
    people[2].arme = "une lance";
    people[2].power = 2;

    string personnage = get_string("Quel personnage souhaitez-vous ?\n Pierre, Paul ou Jack ?\n");


     for(int i = 0; i < 3; i++)
    {
        if(strcmp(people[i].name, personnage) == 0)
        {
            printf("%s a %s ans et a %s\n", people[i].name, people[i].age, people[i].arme);
            break;
        }

    }
    combat(people[0], people[1]);
}

void combat(person people1, person people2)
{
    printf("%s VS %s \n", people1.name, people2.name);
    if(people1.power > people2.power)
    {
        printf("%s KO \n", people2.name);
    }
    else
    {
        printf("%s KO \n", people1.name);
    }
}