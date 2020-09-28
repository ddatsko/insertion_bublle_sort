#include <iostream>
#include "TimeCounter.h"

using namespace std;

void insertionSort(int *x, int n) {
    int key, j, i;
    for (i = 1; i < n; i++) {
        key = x[i];
        j = i - 1;
        while (j >= 0 && x[j] > key) {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = key;
    }
}

void bubbleSort(int *x, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                swap(x[j], x[j + 1]);
            }
        }
    }
}


const int N = 100000;

int main() {
    int a[N];
    for (int i = 0; i < N; i++) {
        a[i] = N - i;
    }
    TimeCounter timeCounter;
    timeCounter.startCount();
    bubbleSort(a, N);
    std::cout << "Bubble sort " << timeCounter.timeElapsed() << std::endl;

    for (int i = 0; i < N; i++) {
        a[i] = N - i;
    }
    timeCounter.startCount();
    insertionSort(a, N);
    std::cout << "Insertion sort " << timeCounter.timeElapsed() << std::endl;
}
