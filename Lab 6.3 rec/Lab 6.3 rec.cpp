#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


void printArray(int* array, int size, int i);
void generateArray(int* arr, int size, int min, int max, int i);
int CountElements(const int* arr, int size, int count, int i);
template <typename T>
void printArray1(T* array, int size, int i) {
    cout << setw(4) << array[i] << " ";
    if (i < size - 1)
        printArray(array, size, i + 1);
    else cout << endl;
}

template <typename T>
void generateArray1(T* arr, int size, int min, int max, int i) {
    if (i < size) {
        arr[i] = min + rand() % (max - min + 1);
        generateArray(arr, size, min, max, i + 1);
    }
    else return;
}

template <typename T>
T CountElements1(const T* arr, int size, T count, int i) {
    if (i < size) {
        if (arr[i] % 2 != 0) {
            return CountElements1(arr, size, count + 1, i + 1);
        }
        else {
            return CountElements1(arr, size, count, i + 1);
        }
    }
    return count;
}



int main() {
    srand(unsigned(time(NULL)));
    const int arrSize = 20;
    int a[arrSize];

    generateArray(a, arrSize, -50, 50, 0);

    cout << "Array Elements:                       ";
    printArray(a, arrSize, 0);

    int CountNumbers = CountElements(a, 20, 0, 0);
    cout << "Count of elements which not divide 2: " << CountNumbers << endl;

    const int arrSize1 = 20;
    int b[arrSize1];

    generateArray1(b, arrSize1, -50, 50, 0);
    cout << "Array Elements:                       ";
    printArray1(b, arrSize1, 0);

    int CountNumbers1 = CountElements1(a, 20, 0, 0);
    cout << "Count of elements which not divide 2: " << CountNumbers1 << endl;
    return 0;
}



void printArray(int* array, int size, int i) {
    cout << setw(4) << array[i] << " ";
    if (i < size - 1)
        printArray(array, size, i + 1);
    if (i == size - 1)
        cout << endl;
}



void generateArray(int* arr, int size, int min, int max, int i) {
    if (i < size) {
        arr[i] = min + rand() % (max - min + 1);
        generateArray(arr, size, min, max, i + 1);
    }
    else return;
}

int CountElements(const int* arr, int size, int count, int i) {

    if (i <= size) {
        if (arr[i] % 2 != 0) {
            return CountElements(arr, size, count + 1, i + 1);
        }
        else return CountElements(arr, size, count, i + 1);
        
    }

    return count;
}

