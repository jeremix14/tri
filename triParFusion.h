#include <iostream>
#include <vector>

typedef int Elem;

void fusionner(Elem* array, Elem* temp, int left, int mid, int right) {
    int i = left, j = mid + 1, k = left;
    for (int index = left; index <= right; index++) {
        temp[index] = array[index];
    }
    while (i <= mid && j <= right) {
        if (temp[i] < temp[j]) {
            array[k++] = temp[i++];
        } else {
            array[k++] = temp[j++];
        }
    }
    while (i <= mid) {
        array[k++] = temp[i++];
    }
}


void mergesort(Elem* array, Elem* temp, int left, int right) {
    if (left >= right) return;
    int mid = (left + right) / 2;
    mergesort(array, temp, left, mid);
    mergesort(array, temp, mid + 1, right);
    fusionner(array, temp, left, mid, right);
}


/*
int main() {
    Elem array[] = {10, 6, 8, 5, 7, 3, 4, 9, 1, 2};
    int size = sizeof(array) / sizeof(array[0]);
    Elem* temp = new Elem[size];

    std::cout << "Avant le traitement: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    mergesort(array, temp, 0, size - 1);

    std::cout << "Après le traitement: ";
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    delete[] temp; 
    return 0;
}
*/