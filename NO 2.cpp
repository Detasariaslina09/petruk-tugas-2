#include <iostream> //DETA SARI ASLINA(2217051117)
using namespace std;

void swap(int arr[], int a, int b) {
   
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = 4;

    swap(arr, 2, 3);
    print(arr, n);

    return 0;
}

/*Buatlah sebuah fungsi lain dengan nama swap() yang akan melakukan penukaran 2 nilai di dalam array arr berukuran n.
Fungsi ini memiliki parameter berupa arr, a, dan b. Dimana a dan b menyatakan index nilai yang akan ditukar. */


