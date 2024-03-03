#include <iostream>

using namespace std;

int main() {
    
    int pilihan;
    float jarak, waktu, kecepatan;

    
    cout << "Pilih rumus yang ingin digunakan:" << endl;
    cout << "1. v = s / t" << endl;
    cout << "2. s = v * t" << endl;
    cout << "3. t = s / v" << endl;
    cout << "Masukkan nomor rumus: ";
    cin >> pilihan;

    
    cout << "Masukkan nilai jarak: ";
    cin >> jarak;
    cout << "Masukkan nilai waktu: ";
    cin >> waktu;
    cout << "Masukkan nilai kecepatan: ";
    cin >> kecepatan;

 
    switch (pilihan) {
        case 1:
            kecepatan = jarak / waktu;
            cout << "Kecepatan: " << kecepatan << endl;
            break;
        case 2:
            jarak = kecepatan * waktu;
            cout << "Jarak: " << jarak << endl;
            break;
        case 3:
            waktu = jarak / kecepatan;
            cout << "Waktu: " << waktu << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
