#include <iostream> //DETA SARI ASLINA(2217051117)
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char strings[n][21];
    for (int i=0; i<n; i++) {
        cin.getline(strings[i], 21);
    }

    for (int i=0; i<n; i++) {
        cout << strings[i] << " " << strlen(strings[i]) << endl;
    }
    return 0;
}

/*Buatlah sebuah program yang menerima input berupa array of c-string sebanyak n. C-String yang diinputkan memiliki panjang maksimum 20 karakter. Program ini kemudian akan menampilkan c-string yang diinputkan diikuti dengan panjang dari c-string tersebut dipisahkan dengan spasi.*/
