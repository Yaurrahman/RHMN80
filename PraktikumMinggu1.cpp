#include <iostream>

using namespace std;

int main() {

    int jam, menit, detik, sisa;
    int biaya;

    cout << "Program perhitungan Billing Warnet "<< endl;
    cout << "==================================="<< endl;
    cout << "Masukkan waktu billing ( Dalam Jam ): ";
    cin >> jam;

    biaya = jam * 5000;

    menit = jam * 60;
    detik = jam * 3600;


    cout << "Anda telah memesan Billing..." << endl;
    cout << "Waktu penggunaan ( Dalam Jam ): " << jam << " jam" << endl;
    cout << "Waktu penggunaan ( Dalam Menit ): " << menit << " menit" << endl;
    cout << "Waktu penggunaan ( Dalam Detik ): " << detik << " detik" << endl;

    cout << "Biaya Total: " << biaya << endl;

    return 0;
}

