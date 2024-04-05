#include <vector>
#include <iostream>
#include <algorithm> // para std::swap

int partitionner(std::vector<int>& vecteur, int debut, int fin) {
    int i = debut - 1;
    for (int j = debut; j < fin; j++) {
        if (vecteur[j] <= vecteur[fin]) {
            i++;
            std::swap(vecteur[i], vecteur[j]);
        }
    }
    std::swap(vecteur[i + 1], vecteur[fin]);
    return i + 1;
}

void triRapide(std::vector<int>& vecteur, int debut, int fin) {
    if (debut < fin) {
        int pivot = partitionner(vecteur, debut, fin);
        triRapide(vecteur, debut, pivot - 1);
        triRapide(vecteur, pivot + 1, fin);
    }
}

int main() {
    std::vector<int> vecteur = {10, 6, 8, 5, 7, 3, 4, 9, 1, 2};
    
    std::cout << "Vecteur avant le tri rapide: ";
    for (int val : vecteur) std::cout << val << " ";
    std::cout << std::endl;

    triRapide(vecteur, 0, vecteur.size() - 1);

    std::cout << "Vecteur après le tri rapide: ";
    for (int val : vecteur) std::cout << val << " ";
    std::cout << std::endl;

    return 0;
}
