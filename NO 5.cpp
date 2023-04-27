#include <iostream>
#include <cstring> //DETA SARI ASLINA(2217051117)
using namespace std;

char* balik(char* str) {
    int len = strlen(str);
    char* reversed= new char[len+1]; 
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len-i-1]; 
    }
    reversed[len] = '\0'; 
    return reversed;
}

int main() {
    char str[] = "Pemrograman Terstruktur";
    cout <<balik(str)<<endl; 
    return 0;
}
/*Buatlah sebuah fungsi dengan nama balik dengan tipe data pointer char. Fungsi ini memiliki satu parameter pointer char yang akan menerima sebuah cstring. Fungsi ini akan mengembalikan cstring yang telah dibalik.
Panjang string maksimal : 25
DENGAN INPUT
 char str[] = "Pemrograman Terstruktur";
cout<<balik(str)<<endl;*/
