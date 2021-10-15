#include <stdio.h>
#include <math.h>

int main(void)
{
    int lengthAB; // Je déclare les deux entiers qui seront demandé à l'utilisateur.
    int lengthBC;

 
   
    printf("Quelle est la longueur de AB ?\n");
    scanf("%d", &lengthAB); // Je demande la première longueur à l'utilisateur.
    printf("Quelle est la longueur de BC ?\n");
    scanf("%d", &lengthBC); // Je demande la deuxième longueur à l'utilisateur.
    
    float hypothenuse = pow(lengthAB, 2) + pow(lengthBC, 2); // j'effectue une partie du calcul ici
    printf("L'hypothénuse de votre triangle rectangle est de %f\n", sqrt(hypothenuse)); // j'écris le résultat final.

}
