#include <iostream>
using namespace std;

int main() {
  
    int jumlahElemen, total = 0;

    cout << "Masukkan jumlah elemen: ";
    cin >> jumlahElemen;

    int array[jumlahElemen];

    for (int i = 0; i < jumlahElemen; i++) {
        cout << "Masukkan nilai elemen ke-" << i + 1 << ": ";
        cin >> array[i];
        total += array[i];
    }

    cout << "Hasil jumlah seluruh elemen pada array: " << total << endl;

    return 0;
}
