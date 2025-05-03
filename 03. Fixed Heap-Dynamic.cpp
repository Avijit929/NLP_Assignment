#include <iostream>
using namespace std;

void fixedHeapDynamic() {
    const int size = 5;
    int* arr = new int[size]; // Allocate on heap

    for (int i = 0; i < size; ++i) {
        arr[i] = i * 2;
    }

    cout << "Fixed Heap-Dynamic Array:\n";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Free heap memory
}

int main() {
    fixedHeapDynamic();
    return 0;
}
