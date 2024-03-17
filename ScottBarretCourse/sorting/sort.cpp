#include <iostream>

void bubbleSort(int array[], int size);
void selectionSort(int array[], int size);
void insertionSort(int array[], int size);

int main()
{
    int a[] = {5, 4, 6, 9, 8, 2};
    for (int it : a) {
        std::cout << it << " -> ";
    }
    std::cout << std::endl;

    //bubbleSort(a, sizeof(a)/sizeof(int));
    //selectionSort(a, sizeof(a)/sizeof(int));
    insertionSort(a, sizeof(a)/sizeof(int));

    for (int it : a) {
        std::cout << it << " -> ";
    }
    std::cout << std::endl;
    return 0;
}

void bubbleSort(int array[], int size)
{
    for (int i = size - 1; i >0; i--) {
        for (int j = 0; j < i; j++) {
            if (array[j] > array[j+1]) {
                 std::swap(array[j], array[j+1]);
            }
        }
    }
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size; i++) {
        int tmp {i};
        for (int j = i+1; j < size; j++) {
            if (array[j] < array[tmp]) {
                tmp = j;
            }
        }
        if (tmp != i) {
            std::swap(array[tmp], array[i]);
        }
    }
}

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++) {
        int tmp{array[i]};
        int j {i - 1};
        while (j >= 0 && tmp < array[j]) {
            array[j+1] = array[j];
            array[j] = tmp;
            j--;
        }
    }
}
