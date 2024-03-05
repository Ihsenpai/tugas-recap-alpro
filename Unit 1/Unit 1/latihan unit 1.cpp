#include <iostream>

using namespace std;

int menu;
int length_int, time_int, speed_int; 
float length, time, speed;

int main() {
    cout << "Pilih Operasi yang digunakan" << endl;
    cout << "1. Menghitung Kecepatan:" << endl;
    cout << "2. Menghitung Jarak:" << endl;
    cout << "3. Menghitung Waktu" << endl;
    cout << "Masukkan nomor : ";
    cin >> menu;

    cout << "Masukkan nilai jarak: ";
    cin >> length_int;
    cout << "Masukkan nilai waktu: ";
    cin >> time_int;
    cout << "Masukkan nilai kecepatan: ";
    cin >> speed_int;

    length = static_cast<float>(length_int);
    time = static_cast<float>(time_int);
    speed = static_cast<float>(speed_int);

    switch (menu) {
        case 1:
            speed = length / time; 
            cout << "Kecepatan: " << speed << endl;
            break;
        case 2:
            length = speed * time;
            cout << "Jarak: " << length << endl;
            break;
        case 3:
            time = length / speed; 
            cout << "Waktu: " << time << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
    }

    return 0;
}
