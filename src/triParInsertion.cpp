#include <iostream>
#include <vector>

void triInsertion(std::vector<int> &vecteur) {
  int actuel;
  int taille = vecteur.size();
  for (int i = 1; i < taille; i++) {
    int j = i - 1;
    actuel = vecteur[i];
    while (j >= 0 && actuel < vecteur[j]) {
      vecteur[j + 1] = vecteur[j];
      j--;
    }
    vecteur[j + 1] = actuel;
  }
}

int main() {
  std::vector<int> vecteur = {5, 3, 8, 6, 2, 7, 4, 1};
  triInsertion(vecteur);

  std::cout << "Vecteur trié: ";
  for (int val : vecteur)
  {
    std::cout << val << " ";
  }
  std::cout << std::endl;

  return 0;
}
