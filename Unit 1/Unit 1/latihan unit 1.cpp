#include <iostream>

using namespace std;
 int menu;
    int length, time, speed;
int main() {
    
   

    
    cout << "Pilih Operasi yang digunakan" << endl;
    cout << "1. Menghitung Kecepatan:" << endl;
    cout << "2. Menghitung Jarak:" << endl;
    cout << "3. Menghitung Waktu" << endl;
    cout << "Masukkan nomor : ";
    cin >> menu;

    
    cout << "Masukkan nilai jarak: ";
    cin >> length;
    cout << "Masukkan nilai waktu: ";
    cin >> time;
    cout << "Masukkan nilai kecepatan: ";
    cin >> speed;

 
    switch (menu) {
        case 1:
            speed = static_cast<float>(length) / static_cast<float>(time);
            cout << "Kecepatan: " << speed << endl;
            break;
        case 2:
            length = static_cast<float>(speed) * static_cast<float>(time);
            cout << "Jarak: " << length << endl;
            break;
        case 3:
            waktu = static_cast<float>(length) / static_cast<float>(speed);
            cout << "Waktu: " << time << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
    }

    return 0;
}
