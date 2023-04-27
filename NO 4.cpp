#include <iostream>
using namespace std;

void sum(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    cout << sum << endl;
}

int main() {
    int x[] = {1, 2, 3};
    sum(x, 3);
    return 0;
}
/*Buatlah sebuah fungsi void dengan nama sum yang mencetak hasil penjumlahan semua nilai dalam suatu array. Fungsi ini memiliki 2 parameter,
1. Sebuah pointer integer yang akan menerima alamat dari array
2. Sebuah nilai integer yang akan menerima ukuran array
DENGAN Input	
int x[] = {1,2,3};
sum(x,3);*/

