#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n-1; i++) {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] > arr[min_idx])
                min_idx = j;

        swap(arr[min_idx], arr[i]);
    }
}

int main() {
    int arr[] = {21, 83, 42, 11, 10, 9, 3, 20, 102, 27, 15, 92, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    selectionSort(arr, n);

    cout << "Hasil pengurutan: \n";
    for (int i=0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
return 0;
}