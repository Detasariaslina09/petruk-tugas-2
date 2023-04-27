/*Buatlah sebuah fungsi search() yang melakukan operasi searching nilai x dalam sebuah array berukuran n. Dimana x, array, dan n dikirimkan sebagai parameter dari fungsi search(). 


Fungsi ini akan mengembalikan nilai integer yang merupakan index dimana nilai x pertama kali ditemukan.


Jika nilai tidak ditemukan, maka kembalikan nilai -1.*/
#include <iostream> //DETA SARI ASLINA
using namespace std;

int search(int arr[], int x, int n) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 10};
    int x = 5;
    int n = 4;
    cout << search(arr, x, n) << endl;
    return 0;
}

