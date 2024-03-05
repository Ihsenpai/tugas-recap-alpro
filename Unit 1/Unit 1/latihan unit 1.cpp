#include <iostream>

using namespace std;
 int menu;
    int jrk, waktu, cepatan;
int main() {
    
   

    
    cout << "Pilih Operasi yang digunakan" << endl;
    cout << "1. Menghitung Kecepatan:" << endl;
    cout << "2. Menghitung Jarak:" << endl;
    cout << "3. Menghitung Waktu" << endl;
    cout << "Masukkan nomor : ";
    cin >> menu;

    
    cout << "Masukkan nilai jarak: ";
    cin >> jrk;
    cout << "Masukkan nilai waktu: ";
    cin >> waktu;
    cout << "Masukkan nilai kecepatan: ";
    cin >> cepatan;

 
    switch (menu) {
        case 1:
            cepatan = static_cast<float>(jrk) / static_cast<float>(waktu);
            cout << "Kecepatan: " << cepatan << endl;
            break;
        case 2:
            jrk = static_cast<float>(cepatan) * static_cast<float>(waktu);
            cout << "Jarak: " << jrk << endl;
            break;
        case 3:
            waktu = static_cast<float>(jrk) / static_cast<float>(cepatan);
            cout << "Waktu: " << waktu << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
