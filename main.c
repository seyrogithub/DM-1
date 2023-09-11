#include <stdio.h>

int numero (int nbinvites){
if (nbinvites <= 2){
    printf("Veuillez aller a la table numero 1\n");
}else if (nbinvites >= 2 && nbinvites <= 4){
    printf("Veuillez aller a la table numero 2\n");
} else if (nbinvites >= 4 && nbinvites <= 8){
    printf("Veuillez aller a la table numero 3\n ");
} else if (nbinvites > 8){
    printf("Nous ne pouvons pas vous recevoir desole.\n");
}
    return 0;
}

char choisirBoisson() {
    char choix;
    printf("Boissons disponibles :\n");
    printf("'s' : soda\n'e' : eau\n'l' : limonade\n");
    printf("Choisissez une boisson : ");
    scanf(" %c", &choix);
    return choix;
}

char choisirPlat() {
    char choix;
    printf("Plats disponibles :\n");
    printf("'c' : couscous\n't' : tomates\n'r' : risotto\n");
    printf("Choisissez un plat : ");
    scanf(" %c", &choix);
    return choix;
}
char choisirDessert() {
    char choix;
    printf("Desserts disponibles :\n");
    printf("'t' : tiramisu\n'g' : glace\n'm' : macaron\n");
    printf("Choisissez un dessert : ");
    scanf(" %c", &choix);
    return choix;
}

int main() {
    int invites;
    int nbpersonnes;
    printf("Quel est le nombre d invites ?\n");
    scanf("%d", &invites);
    nbpersonnes = invites;
invites = numero(invites);
    char boisson, plat, dessert;
    boisson = choisirBoisson();
    plat = choisirPlat();
    dessert = choisirDessert();
    printf("Vous avez choisi :\n");
    printf("Boisson : %c\n", boisson);
    printf("Plat : %c\n", plat);
    printf("Dessert : %c\n", dessert);

    int montantTotal;
    int montantBoisson;
    int montantPlat;
    int montantDessert;

    if (boisson == 's'){
        montantBoisson = 5;
    } else if (boisson == 'e'){
        montantBoisson = 2;
    } else if (boisson == 'l'){
        montantBoisson = 12;
    }
if (plat == 'c'){
    montantPlat = 15;
} else if (plat == 't'){
    montantPlat = 8;
} else if (plat == 'r'){
    montantPlat = 23;
}

if (dessert == 't'){
    montantDessert = 62;
} else if (dessert == 'g'){
    montantDessert = 3;
} else if (dessert == 'm'){
    montantDessert = 8;
}

montantTotal = (montantBoisson + montantPlat + montantDessert) * nbpersonnes;

    printf("L addition a regler est de %d $.\n",montantTotal);
    return 0;
}