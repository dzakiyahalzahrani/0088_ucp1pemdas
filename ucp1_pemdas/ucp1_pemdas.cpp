//1. -integer (int) = 6
//   -boolean (bool) = true / false
//   -float = 4.17

//3. looping
//#include <iostream>
//using namespace std;
//int main() {
//    char pilihan;
//
//    do
//    {
//        cout << "berangkat ambil takjil" << endl;
//        cout << "antri takjil" << endl;
//        cout << "ambil takjil" << endl;
//        cout << "apakah mau antri lagi?" << endl;
//        cin >> pilihan;
//
//    } while (pilihan == 'y' || pilihan == 'Y');
//}

//2. prosedur dan fungsi
//#include <iostream>
//using namespace std;
//
//int bilSatu, bilDua;
//
//void input()
//{
//    cout << "Masukan Bilangan Pertama =";
//    cin >> bilSatu;
//    cout << "Masukan Bilangan Kedua =";
//    cin >> bilDua;
//}
//float penjumlahan(float a, float b)
//{
//    return a + b;
//}

//5. struct
//#include <iostream>
//using namespace std;
//struct DetailAlamat {
//    string desa;
//    string kota;
//};
//struct Mahasiswa {
//    string nim;
//    string nama;
//    DetailAlamat alamat;
//    int umur;
//};
//int main() {
//    Mahasiswa mhs[3];
//    for (int i = 0; i < 3; i++) {
//        cout << "Data ke-" << (i + 1) << ":" << endl;
//        cout << "Nomor Mahasiswa : ";
//        getline(cin, mhs[i].nim);
//        cout << "Nama Mahasiswa : ";
//        getline(cin, mhs[i].nama);
//        cout << "Alamat Mahasiswa : " << endl;
//        cout << "\t Nama Desa : ";
//        cin >> mhs[i].alamat.desa;
//        cout << "\t Nama Kota : ";
//        cin >> mhs[i].alamat.kota;
//        cout << "Umur Mahasiswa : ";
//        cin >> mhs[i].umur;
//        cin.ignore(1, '\n');
//        cout << endl;
//    }
//
//    for (int i = 0; i < 3; i++) {
//        cout << endl;
//        cout << "\n NIM : " << mhs[i].nim;
//        cout << "\n Nama : " << mhs[i].nama;
//        cout << "\n Alamat : ";
//        cout << "\n \t Desa : " << mhs[i].alamat.desa;
//        cout << "\n \t Kota : " << mhs[i].alamat.kota;
//        cout << "\n Umur : " << mhs[i].umur;
//    }
//}

//4. conditional statement
//#include <iostream>
//using namespace std;
//
//int main() {
//    int nBilangan;
//
//    srand(time(0));
//
//    nBilangan - rand() % 10;
//    cout << "Nilai awal adalah : " << nBilangan << endl;
//
//    if (nBilangan % 2 == 0) {
//        nBilangan = nBilangan + 1;
//
//    }
//    cout << "Nilai Akhir = " << nBilangan << endl;
//
//    return 0;
//}

//6.
#include <iostream>
using namespace std;

int main() {
    bool lanjutkan = true;
    char jawaban;

    while (lanjutkan) {
        int jumlahLokasi;

        cout << "Masukkan jumlah lokasi: ";
        cin >> jumlahLokasi;

        int sehat = 0, tidakSehat = 0;

        for (int i = 0; i < jumlahLokasi; ++i) {
            char namaKota;
            int sensor1, sensor2, sensor3;

            cout << "Masukkan nama kota: ";
            cin >> namaKota;
            cout << "Masukkan nilai sensor 1: ";
            cin >> sensor1;
            cout << "Masukkan nilai sensor 2: ";
            cin >> sensor2;
            cout << "Masukkan nilai sensor 3: ";
            cin >> sensor3;

            double rataRata = (sensor1 + sensor2 + sensor3) / 3;
            char status = "Sehat";

            if (rataRata > 75 || sensor1 == 45 || sensor2 == 45 || sensor3 == 45) {
                status = "Tidak Sehat";
                tidakSehat++;
            }
            else {
                sehat;
            }

            cout << namaKota << " " << status << endl;
        }

        cout << "Total lokasi Sehat: " << sehat << endl;
        cout << "Total lokasi Tidak Sehat: " << tidakSehat << endl;

        cout << "Apakah ingin mengulang program? (y/n): ";
        cin >> jawaban;
        lanjutkan = (jawaban == 'y' || jawaban == 'Y');
    }

    return 0;
}

    
    




