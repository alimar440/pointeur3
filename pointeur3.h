#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include ""

typedef struct {
    char titre[20] ;
    char auteur[10] ;
    char mcle[10][7] ;
    int nbmotcle ;
}Document ;

/**************************************/
 Document* creationdedoc (char* title , char* writer , char* wkey[] , int sizekey){
    Document *doc = malloc(sizeof(Document)) ;
    strcpy(doc->titre , title ) ;
    strcpy(doc->auteur , writer ) ;
    doc->nbmotcle = sizekey ;
    for(int i = 0 ; i < sizekey ; i++ )
        strcpy(doc->mcle[i] , wkey[i]) ;

    return doc;

 }
/************************************/

void destructiondoc (Document *doc){
    free(doc) ;
}
/************************************/
void affichage (Document doc){
    printf("Le titre de ce document est %s \n",doc.titre) ;
    printf("L'auteur de ce document est %s \n",doc.auteur) ;
    printf("Ce document contient  %d mots cles qui sont : \n",doc.nbmotcle) ;

    for (int i = 0; i < doc.nbmotcle; i++) {
        printf("%s\n", doc.mcle[i]);
    }


}
/***********************************/
char* recuptitre(Document doc){
    char *titre = malloc(sizeof(char) * (strlen(doc.titre) + 1));
    strcpy(titre, doc.titre);
    return titre ;
}
/***********************************/
char* recupclesN01(Document doc){
    char *motCle = malloc(sizeof(char) * (strlen(doc.mcle[0]) + 1));
    strcpy(motCle, doc.mcle[0]);
    return motCle ;
}
/***********************************/
void ajoutermcle(Document *doc , char* mot){
    if(doc->nbmotcle == 7)
        printf("Impossible de rajouter un mot cle");
    else {
        strcpy((doc->mcle[doc->nbmotcle ]),mot);
     doc->nbmotcle++ ;
    }
}
/***********************************/
void cpydoc (Document doc1 , Document *doc2 ){
    strcpy(doc2->titre , doc1.titre ) ;
    strcpy(doc2->auteur , doc1.auteur ) ;
    doc2->nbmotcle = doc1.nbmotcle ;
    for(int i = 0 ; i < doc1.nbmotcle ; i++ )
        strcpy(doc2->mcle[i] , doc1.mcle[i]) ;

}
/***********************************/
void recherche(Document doc , char* mot , int *a){
    *a = 0 ;
    for(int i = 0 ; i < doc.nbmotcle ; i++)
        if(strcmp(mot , doc.mcle[i]) == 0 ){
            *a = 1 ; break ;
        }
}