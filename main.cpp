#include <iostream>
#include <vector>
#include <algorithm>

#include "triParFusion.h"
#include "triParInsertion.h"
#include "triRapide.h"
/*
L'équipe (maximum 4 personnes) a pour mission de développer un programme capable de trier des séquences 
de 500, 5.000 et 50.000 nombres. 

Ce programme évaluera les performances des algorithmes de tri suivants: 
    Insertion Sort, QuickSort et MergeSort, à travers différents ensembles de données, 
    y compris des cas extrêmes tels que des séquences déjà triées ou des séquences en ordre décroissant.

Code :
Fonctionnalités du programme à implémenter:
    Génération de séquences numériques de différentes tailles : 500, 5 000 et 50 000.
    Inclusion des cas extrêmes dans les données de test:
        Séquences déjà triées en ordre ascendant.
        Séquences triées en ordre décroissant.
    Tri de séquences en ordre ascendant et descendant.
    Évaluation des performances basée sur:
        Le temps d'exécution.
        Le nombre d'échanges effectuées.
        Le nombre de comparaisons réalisées.
    Génération d'histogrammes pour visualiser la distribution des données avant et après le tri.
    Affichage des résultats et sauvegarde dans un fichier "Sortie.txt".
    Conception d'une interface utilisateur avec un menu interactif.

Livrable :
    Le code source complet avec la sortie
*/
int main() {

    //Test de la méthode de tri par fusion (MergeSort) :
    std::cout << "Test de la méthode de tri par fusion : \n";
    Elem array1[] = {10, 6, 8, 5, 7, 3, 4, 9, 1, 2};
    int size = sizeof(array1) / sizeof(array1[0]);
    Elem* temp = new Elem[size];

    std::cout << "\tArray1 avant le tri : ";
    for (int i = 0; i < size; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl;

    mergesort(array1, temp, 0, size - 1);

    std::cout << "\tArray1 apres le tri : ";
    for (int i = 0; i < size; i++) {
        std::cout << array1[i] << " ";
    }
    std::cout << std::endl << std::endl;

    delete[] temp; 




    //Test de la méthode de tri par insertion (Insertion Sort) :

    std::vector<int> vecteur1 = {5, 3, 8, 6, 2, 7, 4, 1};
    std::cout << "Test de la méthode de tri par insertion : \n";
    std::cout << "\tVecteur1 avant le tri : ";
    for (int val : vecteur1)
    {
    std::cout << val << " ";
    }
    std::cout << std::endl;
    triInsertion(vecteur1);

    std::cout << "\tVecteur1 apres le tri : ";
    for (int val : vecteur1)
    {
    std::cout << val << " ";
    }
    std::cout << std::endl << std::endl;





    //Test de la méthode de tri rapide (QuickSort) :

    std::vector<int> vecteur2 = {10, 6, 8, 5, 7, 3, 4, 9, 1, 2};
        std::cout << "Test de la méthode de tri rapide : \n";
    std::cout << "\tVecteur2 avant le tri : ";
    for (int val : vecteur2) std::cout << val << " ";
    std::cout << std::endl;

    triRapide(vecteur2, 0, vecteur2.size() - 1);

    std::cout << "\tVecteur2 apres le tri : ";
    for (int val : vecteur2) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
