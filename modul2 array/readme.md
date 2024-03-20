Laporan Praktikum Modul 2 - Array
Fajar Farizqi Azmi

2311102192 / 11-E-IF

Dasar Teori
A.Pengertian Array

Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama. Array dibagi menjadi :

Array Satu Dimensi
Array satu dimensi tidak lain adalah kumpulan elemen-elemen identik yang tersusun dalam satu baris, tetapi isi dari elemen tersebut boleh berbeda. Dapat disebut juga dengan istilah vektor yang menggambarkan data dalam suatu urutan Deklarasi : Type_Data Nama_Variabel [index] Misalnya : int A[5];

2.  Array Dua Dimensi

Array dua dimensi yang sering digambarkan sebagai sebuah matriks merupakan perluasan dari sebuah array satu dimensi. Jika array satu dimensi hanya terdiri dari sebuah baris dengan beberapa kolom elemen maka array dua dimensi terdiri dari beberapa baris dan beberapa kolom elemen yang bertipe sama. Pendeklarasian array dua dimensi hampir sama dengan pendeklarasian array satu dimensi, kecuali bahwa array dua dimensi terdapat dua jumlah elemen array yang terdapat di dalam kurung siku dan keduanya boleh tidak sama. Deklarasi : Type_Data Nama_Variabel [Index1] [index2]; Misal : int A[3][2];

3.  Array Tiga Dimensi

Array tiga dimensi digunakan untuk mengelola data dalam bentuk 3 dimensi atau tiga sisi. Deklarasi : Type_Data Nama_Variabel [index1] [ndex2] [index3]; Misal : int A [3][4][2];

4.  Array Banyak Dimensi

Sebenarnya array banyak dimensi ini tidak terlalu sering dipakai seperti halnya array satu dimensi, dua dimensi, dan tiga dimensi. Array banyak dimensi ini pada dasarnya sama dengan array sebelimnya kecuali pada jumlah dimensinya. Deklarasi : Type_Data Nama_Variabel [index1] [ndex2] [index3] [ndex4].....; Misal : int A [3][4][2][5];

Guided 1. 
Program input array tiga dimensi
    #include <iostream>
    using namespace std;
    // PROGRAM INPUT ARRAY 3 DIMENSI
    int main()
    {
    // Deklarasi array
    int arr[2][3][3];
    // Input elemen
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> arr[x][y][z];
            }
        }
        cout << endl;
    }
    // Output Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << arr[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilan array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << arr[x][y][z] << ends;
            }
            cout << endl;
        }
        cout <<endl;
    }
    }
Program tersebut merupakan sebuah program dalam bahasa C++ yang memungkinkan pengguna untuk menginputkan data ke dalam array tiga dimensi dan kemudian menampilkannya. Program ini terdiri dari tiga bagian utama:
Deskripsi Program
Program tersebut berfungsi untuk menginputkan data ke dalam array tiga dimensi dan kemudian menampilkannya. Program ini terdiri dari tiga bagian utama:

1.Input Data:

Program meminta kita untuk memasukkan nilai-nilai ke dalam array tiga dimensi menggunakan tiga nested loop.

2.Output Data:

Setelah semua data dimasukkan, program akan menampilkan nilai-nilai dari array tiga dimensi yang telah dimasukkan oleh kita.

3.Tampilan Array:

Program juga menampilkan array dalam bentuk yang lebih sederhana, dengan menampilkan setiap baris dari array dalam satu baris dengan menggunakan perulangan.

guided 2
Program mencari nilai maksimal pada array

     #include <iostream>
     using namespace std;
     int main()
     {
     int maks, a, i = 1, lokasi;
     cout << "Masukkan panjang array: ";
     cin >> a;
     int array[a];
     cout << "Masukkan " << a << " angka\n";
     for (i = 0; i < a; i++)
     {
     cout << "Array ke-" << (i) << ": ";
     cin >> array[i];
     }
     maks = array[0];
     for (i = 0; i < a; i++)
     {
     if (array[i] > maks)
     {
     maks = array[i];
     lokasi = i;
     }
     }
     cout << "Nilai maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
     }
Deskrpisi Program
Program tersebut bertujuan untuk mencari nikai maksimum yang sudah diinputkan.

Unguided
1.Buatlah program untuk menampilkan Output seperti berikut dengan data yang diinputkan oleh user!

   #include <iostream> 
using namespace std; 

int main() { 
    int bilangan [10]; 
    
    //data array yang akan di proses
    cout << "Data Array : " ; 
    for (int i=0; i<10; i++){ 
        cin >> bilangan [i] ; 
        
    } 
    // proses pemilihan nomor genap yang akan di outputkan
    cout << "Nomor Genap : " ; 
    for (int i=0; i<10; i++){ 
        if (bilangan [i]%2 == 0){ 
            cout << bilangan [i] << " " ; 
            
        } 
    } 
    //proses pemilihan nomor ganjil yang akan di outputkan
    cout << endl; 
    cout << "Nomor Ganjil : " ; 
    for (int i=0; i<10; i++){ 
        if (bilangan [i]%2 != 0){ 
            cout << bilangan [i] << " " ; 
         } 
    } 
    return 0;
}
Output
![Screenshot output unguided 1](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/8eca0732-7134-412d-9507-9f672b425146)

Deskrpisi Program
Program tersebut bertujuan untuk memisahkan bilangan genap dan ganjil dari sebuah array yang berisi 10 bilangan yang diinputkan.

2.Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya diinputkan oleh user!

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

Output
![Screenshot output unguided 2](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/555bfcce-b670-4bac-a670-7fa40025adad)

Deskrpisi Program
Program tersebut bertujuan untuk memasukkan jumlah elemen matriks dan ukuran matriks dalam format "baris kolom", kemudian meminta kita untuk memasukkan nilai-nilai elemen dari matriks tiga dimensi. Setelah itu, program akan menampilkan data matriks beserta tampilan matriks satu per satu dengan nomor urutan matriks.

3.Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!
      #include <iostream>
using namespace std;

int input;
int bil[10];
int minim, maksim;
double rata;
// FAJAR FARIZQI AZMI
// 2311102192
int main(){

    while(true){
    cout << "\t" "\t" << "MENU" << endl;
    cout << "\t" << "1. INPUT ARRAY" << endl;
    cout << "\t" << "2. TAMPIL ARRAY" << endl;
    cout << "\t" << "3. CARI NILAI MINIMMUM" << endl;
    cout << "\t" << "4. CARI NILAI MAKSIMUM" << endl;
    cout << "\t" << "5. HITUNG RATA - RATA" << endl;

    cout << "MASUKAN PILIHAN : ";
    cin >> input;

    cout << endl;

    switch (input)
    {
    case 1 : 
        {
            for(int i = 0; i < 10; i++){
                cout << "MASUKAN BILANGAN KE - " << i + 1 << " : ";
                cin >> bil[i];
            }
            cout << endl;
        break;
        }
    case 2 : 
        {
            cout << "ARRAY YANG DI INPUT : ";
            for (int i = 0; i < 10; i++){
                cout << bil[i] << " ";
            }
        cout << endl;
        }
    cout << endl;
    break;
    case 3 :
        {
            minim = bil[0];
            for(int i = 0; i < 10; i++){
                if(bil[i] < minim){
                    minim = bil[i];
                }
            }
            cout << "NILAI MINIMUM DARI ARRAY TERSEBUT : " << minim << endl;
            cout << endl;
        }
    break;
    case 4 :
        {
            maksim = bil[0];
            for (int i = 0; i < 10; i++){
                if(bil[i] > maksim){
                    maksim = bil[i];
                }
            }
            cout << "NILAI MAKSIMUM DARI ARRAY TERSEBUT : " << maksim << endl;
            cout << endl;
        }
    break;
    case 5 :
        {
            for(int i = 0; i < 10; i++){
                rata += bil[i] / 12;
            }
            cout << "RATA - RATA DARI ARRAY TERSEBUT : " << rata;
        }
        cout << endl;
        cout << endl;
        break;
    }
}
    return 0;
}
Output
![Screenshot output unguided 3](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/f520b518-5611-410f-8dcd-d08e26c74128)

Deskrpisi Program
Program menggunakan loop do-while untuk terus menampilkan menu hingga pengguna memilih untuk keluar dari program.Loop do-while ini akan menampilkan menu dan meminta pengguna untuk memilih opsi yang diinginkan. Setelah opsi dipilih, program akan mengeksekusi opsi tersebut dan kemudian kembali ke menu utama. Program akan terus berjalan sampai pengguna memilih untuk keluar dari program.
Secara keseluruhan, program ini dirancang untuk memudahkan pengguna dalam mengelola nilai-nilai dalam array dengan menampilkan menu yang intuitif dan mudah dipahami serta menggunakan fungsi-fungsi yang tersedia untuk mencari nilai minimum, maksimum, dan rata-rata dari nilai-nilai dalam array.

Kesimppulan
Array adalah sebuah struktur data yang terdiri dari kumpulan elemen dengan tipe data yang sama, yang tersimpan secara berurutan di dalam memori komputer. Setiap elemen dalam array diidentifikasi oleh indeksnya, dimulai dari angka 0. Ada tiga jenis array yang paling umum digunakan, yaitu array satu dimensi, array dua dimensi, dan array tiga dimensi atau multidimensi.
Kelebihan dari penggunaan array adalah memungkinkan untuk menyimpan banyak nilai dengan satu nama variabel, serta memiliki kemampuan untuk menyimpan data dalam lebih dari satu dimensi. Hal ini membuat array menjadi sangat berguna dalam pemrograman untuk mempermudah pengelolaan data dan menghemat penggunaan variabel. Selain itu, array juga dapat digunakan untuk mempermudah proses pengolahan data, seperti mengurutkan, mencari nilai maksimum atau minimum, dan menghitung rata-rata.
Namun, penggunaan array juga memiliki beberapa kelemahan. Alokasi memori yang tepat dan pengelolaan memori yang efisien sangat penting dalam penggunaan array untuk mencegah terjadinya kesalahan atau kebocoran memori. Oleh karena itu, diperlukan pemahaman yang baik tentang penggunaan dan manajemen array untuk menghindari masalah pada program yang dihasilkan.

