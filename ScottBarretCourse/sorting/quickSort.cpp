#include <iostream>

int pivot(int array[], int pivotIndex, int endIndex);
void quickSort(int array[], int leftIndex, int rightIndex);

int main()
{
    int myArray[] = {4,5,1,7,3,2,5};
    int size {sizeof(myArray) / sizeof(myArray[0])};
    //int returnedIndex = pivot(myArray, 0, size - 1);
    quickSort(myArray, 0, size - 1);
    //std::cout << "Returned index: " << returnedIndex << "\n";

    for (int it : myArray) {
        std::cout << it << ", ";
    }

    return 0;
}

int pivot(int array[], int pivotIndex, int endIndex)
{
    int swapIndex {pivotIndex};
    for (int i = pivotIndex + 1; i <= endIndex; i++) {
        if (array[i] < array[pivotIndex]) {
            swapIndex++;
            std::swap(array[swapIndex], array[i]);
        }
    }
    std::swap(array[pivotIndex], array[swapIndex]);
    return swapIndex;
}

void quickSort(int array[], int leftIndex, int rightIndex)
{
    if (leftIndex > rightIndex) {
        return;
    }
    int pivotIndex = pivot(array, leftIndex, rightIndex);
    quickSort(array, leftIndex, pivotIndex - 1);
    quickSort(array, pivotIndex + 1, rightIndex);
}

