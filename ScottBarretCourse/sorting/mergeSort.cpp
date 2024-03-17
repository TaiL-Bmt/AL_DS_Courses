#include <iostream>
#include <cstdint>

void merge(int32_t array[], int32_t leftIndex, int32_t midIndex, int32_t rightIndex);
void mergeSort(int32_t array[], int32_t leftIndex, int32_t rightIndex);

int32_t main()
{
    int32_t myArray[] = {10, 12, 11, 9, 1, 3, 7, 8, 2, 4, 5, 6};
    int32_t size{sizeof(myArray) / sizeof(myArray[0])};
    int32_t leftIndex{0};
    int32_t rightIndex{size - 1};
    int32_t midIndex{leftIndex+ (rightIndex - leftIndex) / 2};

    //merge(myArray, leftIndex, midIndex, rightIndex);
    mergeSort(myArray, leftIndex, rightIndex);

    for (int32_t it : myArray) {
        std::cout << it << ", ";
    }
    std::cout << std::endl;

    return 0;
}

void merge(int32_t array[], int32_t leftIndex, int32_t midIndex, int32_t rightIndex)
{
    int32_t leftArraySize {midIndex - leftIndex + 1};
    int32_t rightArraySize {rightIndex - midIndex};

    int32_t leftArray[leftArraySize] = {0};
    int32_t rightArray[rightArraySize] = {0};

    for (int32_t i = 0; i < leftArraySize; i++) {
        leftArray[i] = array[leftIndex + i];
    }
    for (int32_t i = 0; i < rightArraySize; i++) {
        rightArray[i] = array[midIndex + i + 1];
    }

    int index{leftIndex};
    int i{0}, j{0};
    while (i < leftArraySize && j < rightArraySize) {
        if (leftArray[i] < rightArray[j]) {
            array[index] = leftArray[i];
            index++;
            i++;
        } else {
            array[index] = rightArray[j];
            index++;
            j++;
        }
    }
    while (i < leftArraySize) {
        array[index] = leftArray[i];
        i++;
        index++;
    }
    while (j < rightArraySize) {
        array[index] = rightArray[j];
        j++;
        index++;
    }
}
void mergeSort(int32_t array[], int32_t leftIndex, int32_t rightIndex)
{
    if (rightIndex == leftIndex) {
        return;
    }

    int32_t midIndex{(leftIndex + rightIndex) / 2};
    mergeSort(array, leftIndex, midIndex);
    mergeSort(array, midIndex+1, rightIndex);
    merge(array, leftIndex, midIndex, rightIndex);

    return;
}
