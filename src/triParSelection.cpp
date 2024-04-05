#include <iostream>
#include <vector>
#include <algorithm> // Para std::swap

template <typename T>
void triParSelection(std::vector<T> &elements) {
  int taille = elements.size();
  for (int i = 0; i < taille - 1; i++) {
    int plusPetit = i;
    for (int j = i + 1; j < taille; j++) {
      if (elements[j] < elements[plusPetit]) {
        plusPetit = j;
      }
    }
    if (i != plusPetit) {
      std::swap(elements[i], elements[plusPetit]);
    }
  }
}

int main()
{
  std::vector<int> vecteur = {5, 3, 8, 6, 2, 7, 4, 1};

  std::cout << "Vecteur avant le tri: ";
  for (int element : vecteur)
  {
    std::cout << element << " ";
  }
  std::cout << std::endl;

  triParSelection(vecteur);

  std::cout << "Vecteur après le tri: ";
  for (int element : vecteur)
  {
    std::cout << element << " ";
  }
  std::cout << std::endl;

  return 0;
}