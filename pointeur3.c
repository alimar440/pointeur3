#include <stdio.h>
#include <stdlib.h>
#include "pointeuR3.H"

int main() {


    char* motsCles[] = {"info", "prog", "langage"};
    Document *doc = creationdedoc("algo et prog", "ali mar", motsCles, 3);

    printf("\n\n\n==========AFFICHAGE DU DOCUMENT==========\n\n\n");
    affichage(*doc) ;

    printf("\n\n\n==========AFFICHAGE DU TITRE ET DU 1ER MOT CLE AVEC LES FONCTION==========\n\n\n");
    printf("le titre est : %s\n",recuptitre(*doc));
    char* motcle = recupclesN01(*doc) ;
    printf("Premier mot clé : %s\n", motcle);

    printf("\n\n\n==========AJOUT MOT CLE AVEC LA FONCTION==========\n\n\n");
    ajoutermcle( doc , "algo");
    printf("\n=== Affichage du document après l'ajout ===\n");
    affichage(*doc);

    printf("\n\n\n==========COPIE DOCUMENT AVEC LA FONCTION==========\n\n\n");
    Document *doc0 = malloc(sizeof(Document));
   cpydoc( *doc , doc0);
   printf("document copiE \n");
   affichage(*doc0);

   printf("\n\n\n==========RECHERCHE MOT CLE AVEC LA FONCTION==========\n\n\n");
   int a ;
   recherche(*doc, "programmation" , &a);
    if (a) {
        printf(" mot clE prEsent dans le document.\n");
    } else {
        printf("mot clE pas prEsent dans le document.\n");
    }



    destructiondoc(doc);
    printf("\n Document dEtruit avec succEs.\n");


    return 0;
}
