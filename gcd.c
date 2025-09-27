/**
 * Euclidian Algorithm
 *
 * The Euclidean algorithm (also called Euclid's algorithm) is an
 * algorithm to determine the greatest common divisor of two integers.
 */
#include <stdio.h> // Inclus la bibliothèque stdio pour pouvoir utiliser la fonction `printf` 
#include <stdlib.h> // Inclus la bibliothèque stdlib pour pouvoir utiliser la fonction `atoi`
#include <string.h> // Inclus la bibliothèque string pour les fonctions de manipulation de chaînes

/*
  Description :
  Calcule du plus grand diviseur commun de deux entier

  Entrée :
  - a = premier entier
  - b = deuxieme entier

  Sortie :
  - a = retourne le PGCD 
 
 */
int gcd(int a, int b) {

  int r = 0; // initialisation de la variable du reste


  // Boucle tant que b est different de zero
  while (b != 0) {
    r = a % b; // enregistrement du reste de la division de a et b dans r)
    a = b;     // a prend la valeur de b 
    b = r;     // b prend la valeur de r 
  }

  // la fonction retourne la valeur a
  return a;
}

/*
  Description: 
  Boucle principale du programme

  Entrée : 
  - argc = nombre d'argument
  - argv = valeurs entrées par l'utilisateur

  Sortie :
  - 0 = exéctuction reussi
  - -1 = erreur

*/
int main(int argc, char* argv[]) {
  
    //vérifie qu'il y a au moins deux arguments
    if (argc <= 2) {
        //retourne -1 (erreur) si pas assez d'arguments
        return -1;
    }

    // Convertit le premier chiffre en entier
    int a = atoi(argv[1]);
    // Convertit le deuxième chiffre en entier
    int b = atoi(argv[2]);

    // calcule du PGCD avec la fonction gcd
    int result = gcd(a, b);

    // Affiche le resultat 
    printf("%d\n", result);

    // Retourne 0 (exéctuction reussi)
    return 0;
}
