
<h1 align="center">Licence Science Et Technologie 2 <br> MPI2 - MASS 2 <br> Exercice TD D'Algorithme Et Programmation 3 <br> Premiere Session <br> 2021-2022 </h1>
<hr>

## Table des matières

1. [Description](#description)
2. [Utilisation](#Utilisation)
3. [Auteur](#auteur)

## Description <a name="description"></a>
#### Gestion de documents avec mots-clés
Ce programme en langage C permet de gérer des documents en utilisant une structure de données appelée "Document". Chaque document est caractérisé par un titre, un auteur et une liste de mots-clés. Chaque document peut contenir jusqu'à sept mots-clés.

 Fonctionnalités principales :
 
 * Création d'un document : La fonction `creationdedoc` permet de créer un document en spécifiant son titre, son auteur et une liste de mots-clés. Elle alloue dynamiquement de la mémoire pour le document et renvoie un pointeur vers ce dernier.
 * Destruction d'un document : La fonction `destructiondoc` libère la mémoire allouée pour un document.
 * Affichage d'un document : La fonction `affichage` affiche les informations d'un document, y compris son titre, son auteur et sa liste de mots-clés.
 * Récupération du titre et des mots-clés : Les fonctions `recuptitre` et recupclesN01 permettent de récupérer respectivement le titre et le premier mot-clé d'un document.
 * Ajout d'un mot-clé : La fonction `ajoutermcle` permet d'ajouter un nouveau mot-clé à la liste des mots-clés d'un document, à condition que le nombre maximum de mots-clés n'ait pas été atteint.
 * Copie d'un document : La fonction `cpydoc` effectue la copie d'un document dans un autre document, en copiant toutes les informations, y compris le titre, l'auteur et la liste de mots-clés.
 * Recherche d'un mot-clé : La fonction `recherche` permet de vérifier si un document contient un certain mot-clé en effectuant une comparaison avec tous les mots-clés du document.

## Utilisation
Le programme inclut une fonction `main` qui démontre l'utilisation des différentes fonctionnalités en créant un document, en affichant ses informations, en ajoutant un mot-clé, en effectuant une copie du document, puis en détruisant le document.

Ce programme fournit une base solide pour la gestion de documents avec mots-clés en langage C. Il peut être étendu et amélioré en ajoutant de nouvelles fonctionnalités selon les besoins du projet.

## Auteur <a name="auteur"></a>

* [alimar440](https://github.com/alimar440)
