#include <iostream>

using namespace std;

int main() {
    
    int jumlahTransaksi, nominalTransaksi, totalTransaksi = 0;

   
    cout << "Masukkan jumlah transaksi: ";
    cin >> jumlahTransaksi;

   
    if (jumlahTransaksi <= 0) {
        cout << "Tidak ada transaksi hari ini" << endl;
        return 0;
    }


    for (int i = 0; i < jumlahTransaksi; i++) {
        cout << "Masukkan nominal transaksi ke-" << i + 1 << ": ";
        cin >> nominalTransaksi;
        totalTransaksi += nominalTransaksi;
    }

  
    cout << "Total pengeluaran hari ini: " << totalTransaksi << endl;

    return 0;
}
