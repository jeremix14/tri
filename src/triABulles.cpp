#include <iostream>
#include <vector>
#include <algorithm> // std::swap

template <typename T>
void triBulle(std::vector<T>& elements) {
    for (int j = 0; j < elements.size() - 1; j++) {
        for (int i = 0; i < elements.size() - 1; i++) {
            if (elements[i] > elements[i + 1]) {
                std::swap(elements[i], elements[i + 1]);
            }
        }
    }
}

template <typename T>
void triABulles2(std::vector<T>& elements) {
    for (int dernier = elements.size() - 1; dernier > 0; dernier--) {
        for (int i = 0; i < dernier; i++) {
            if (elements[i] > elements[i + 1]) {
                std::swap(elements[i], elements[i + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> vecteur = {5, 3, 8, 6, 2, 7, 4, 1};

    std::cout << "Vecteur avant le tri: ";
    for (int element : vecteur) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    triBulle(vecteur);

    std::cout << "Vecteur après le tri: ";
    for (int element : vecteur) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
