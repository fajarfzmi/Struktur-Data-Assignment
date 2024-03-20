#include <iostream>
using namespace std;

int main() {
    int x_192, y_192, z_192;

    // Meminta pengguna untuk memasukkan ukuran elemen array tiga dimensi
    cout << "Masukkan ukuran array tiga dimensi:" << endl;
    cout << "Ukuran dimensi x: ";
    cin >> x_192;
    cout << "Ukuran dimensi y: ";
    cin >> y_192;
    cout << "Ukuran dimensi z: ";
    cin >> z_192;

    // Deklarasi array tiga dimensi sesuai dengan ukuran yang dimasukkan pengguna
    int arr[x_192][y_192][z_192];

    // Input elemen array
    for (int x = 0; x < x_192; x++) {
        for (int y = 0; y < y_192; y++) {
            for (int z = 0; z < z_192; z++) {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }

    // Output elemen array
    cout << "Data Array:" << endl;
    for (int x = 0; x < x_192; x++) {
        for (int y = 0; y < y_192; y++) {
            for (int z = 0; z < z_192; z++) {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }

    // Tampilan array
    cout << "Tampilan array:" << endl;
    for (int x = 0; x < x_192; x++) {
        for (int y = 0; y < y_192; y++) {
            for (int z = 0; z < z_192; z++) {
                cout << arr[x][y][z] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
