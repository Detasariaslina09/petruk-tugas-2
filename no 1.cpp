#include <iostream> //DETA SARI ASLINA(2217051117)
using namespace std;

double cube(int sisi1, int sisi2) {
    double luas = sisi1 * sisi2;
    return luas;
}

double cube(int panjang, int lebar, int tinggi) {
   double volume = panjang * lebar * tinggi;
    return volume;
}

int main() {
    cout <<  cube(1, 2) << endl;
    cout <<  cube(1, 2, 4) << endl;
    return 0;
}

