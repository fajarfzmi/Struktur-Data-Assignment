# <h1 align="center">LAPORAN PRAKTIKUM MODUL 8 SEARCHING</h1>
<p align="center">FAJAR FARIZQI AZMI_2311102192_IF-11-E</p>




  Dasar Teori 

  Pencarian (Searching) yaitu proses menemukan suatu nilai tertentu pada kumpulan data. Hasil pencarian adalah salah satu dari tiga keadaan ini: data ditemukan, data
ditemukan lebih dari satu, atau data tidak ditemukan. Searching juga dapat dianggap sebagai proses pencarian suatu data di dalam sebuah array dengan cara mengecek satu
persatu pada setiap index baris atau setiap index kolomnya dengan menggunakan teknik perulangan untuk melakukan pencarian data. Terdapat 2 metode pada algoritma
Searching, yaitu:

a. Sequential Search

Sequential Search merupakan salah satu algoritma pencarian data yang biasa digunakan untuk data yang berpola acak atau belum terurut. Sequential search juga
merupakan teknik pencarian data dari array yang paling mudah, dimana data dalam array dibaca satu demi satu dan diurutkan dari index terkecil ke index terbesar, maupun sebaliknya. 
Konsep Sequential Search yaitu:

● Membandingkan setiap elemen pada array satu per satu secara berurut.
● Proses pencarian dimulai dari indeks pertama hingga indeks terakhir.
● Proses pencarian akan berhenti apabila data ditemukan. Jika hingga akhirarray data masih juga tidak ditemukan, maka proses pencarian tetap akan
dihentikan.
● Proses perulangan pada pencarian akan terjadi sebanyak jumlah N elemen
pada array.

Algoritma pencarian berurutan dapat dituliskan sebagai berikut :
1) i ← 0
2) ketemu ← false
3) Selama (tidak ketemu) dan (i <= N) kerjakan baris 4
4) Jika (Data[i] = x) maka ketemu ← true, jika tidak i ← i + 1
5) Jika (ketemu) maka i adalah indeks dari data yang dicari, jika tidak data
tidak ditemukan.

b. Binary search

Binary Search termasuk ke dalam interval search, dimana algoritma ini merupakan algoritma pencarian pada array/list dengan elemen terurut. Pada metode ini,
data harus diurutkan terlebih dahulu dengan cara data dibagi menjadi dua bagian (secara logika), untuk setiap tahap pencarian. Dalam penerapannya algoritma ini sering
digabungkan dengan algoritma sorting karena data yang akan digunakan harus sudah terurut terlebih dahulu. Konsep Binary Search:

● Data diambil dari posisi 1 sampai posisi akhir N.
● Kemudian data akan dibagi menjadi dua untuk mendapatkan posisi data tengah.
● Selanjutnya data yang dicari akan dibandingkan dengan data yang berada di posisi tengah, apakah lebih besar atau lebih kecil.
● Apabila data yang dicari lebih besar dari data tengah, maka dapat dipastikan bahwa data yang dicari kemungkinan berada di sebelah kanan dari data tengah.
Proses pencarian selanjutnya akan dilakukan pembagian data menjadi dua bagian pada bagian kanan dengan acuan posisi data tengah akan menjadi posisi
awal untuk pembagian tersebut.
● Apabila data yang dicari lebih kecil dari data tengah, maka dapat dipastikan bahwa data yang dicari kemungkinan berada di sebelah kiri dari data tengah. Proses pencarian selanjutnya akan dilakukan pembagian data menjadi dua
bagian pada bagian kiri. Dengan acuan posisi data tengah akan menjadi posisi
akhir untuk pembagian selanjutnya.
● Apabila data belum ditemukan, maka pencarian akan dilanjutkan dengan kembali membagi data menjadi dua.
● Namun apabila data bernilai sama, maka data yang dicari langsung ditemukan dan pencarian dihentikan.
Algoritma pencarian biner dapat dituliskan sebagai berikut :
1) L 🡨 0
2) R 🡨 N – 1
3) ketemu 🡨 false
4) Selama (L <= R) dan (tidak ketemu) kerjakan baris 5 sampai dengan 8
5) m 🡨 (L + R) / 2
6) Jika (Data[m] = x) maka ketemu 🡨 true
7) Jika (x < Data[m]) maka R 🡨 m – 1
8) Jika (x > Data[m]) maka L 🡨 m + 1
9) Jika (ketemu) maka m adalah indeks dari data yang dicari, jika tidak data
tidak ditemukan

[GUIDED]  

Guided 1
 
```c++
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;
    // algoritma Sequential Search
    for (i = 0; i < n; i++)
    {
        if (data[i] == cari)
        {
            ketemu = true;
            break;
        }
    }
    cout << "\t Program Sequential Search Sederhana\n " << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;
    if (ketemu)
    {
        cout << "\n angka " << cari << " ditemukan pada indeks ke -" << i << endl;
                                       
    }
    else
    {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}
```
output :

![Screenshot 2024-05-21 183831](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/07f37bf4-4547-421d-b486-d1902e5594cd)


DESKRIPSI PEOGRAM :

Program tersebut adalah contoh implementasi dari algoritma sequential search.
Algoritma tersebut digunakan untuk mencari suatu nilai dalam array data yang diberikan

Guided 2

```c++

#include <iostream>
#include <iomanip>
using namespace std;
// Deklarasi array dan variabel untuk pencarian
int arrayData[7] = {1, 8, 2, 5, 4, 9, 7};
int cari;
void selection_sort(int arr[], int n)
{
    int temp, min;
    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // Tukar elemen
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void binary_search(int arr[], int n, int target)
{
    int awal = 0, akhir = n - 1, tengah, b_flag = 0;
    while (b_flag == 0 && awal <= akhir)
    {
        tengah = (awal + akhir) / 2;
        if (arr[tengah] == target)
        {
            b_flag = 1;

                break;
        }
        else if (arr[tengah] < target)
        {
            awal = tengah + 1;
        }
        else
        {
            akhir = tengah - 1;
        }
    }
    if (b_flag == 1)
        cout << "\nData ditemukan pada index ke-" << tengah << endl;
    else
        cout << "\nData tidak ditemukan\n";
}
int main()
{
    cout << "\tBINARY SEARCH" << endl;
    cout << "\nData awal: ";
    // Tampilkan data awal
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    cout << "\nMasukkan data yang ingin Anda cari: ";
    cin >> cari;
    // Urutkan data dengan selection sort
    selection_sort(arrayData, 7);
    cout << "\nData diurutkan: ";
    // Tampilkan data setelah diurutkan
    for (int x = 0; x < 7; x++)
    {
        cout << setw(3) << arrayData[x];
    }
    cout << endl;
    // Lakukan binary search
    binary_search(arrayData, 7, cari);
    return 0;
}

```
Output :

![image](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/d839b48f-26e9-4d80-ab6f-cd9ed7c79b13)

Deskripsi program :

Program tersebut adalah contoh implementasi dari algoritma binary search pada array yang diurutkan menggunakan algoritma Selection Sort. Program ini akan mencari nilai yang diinputkan oleh user


[UNGUIDED]

UNGUIDED 1

```c++
// fajar farizqi azmi
// 2311102192
// if-11-e

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int binarySearch(string kalimat, char huruf)
{
    sort(kalimat.begin(), kalimat.end()); 

    int left = 0;
    int right = kalimat.length() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (kalimat[mid] == huruf)
        {
            return mid; 
        }
        else if (kalimat[mid] < huruf)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; 
}

int main()
{
    string kalimat;
    char huruf;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    int indeks = binarySearch(kalimat, huruf);

    if (indeks == -1)
    {
        cout << "Huruf " << huruf << " tidak ditemukan dalam kalimat." << endl;
    }
    else
    {
        cout << "Huruf " << huruf << " ditemukan pada indeks " << indeks << " dalam kalimat." << endl;
    }

    return 0;
}

```

Screnshoot OUTPUT :

![Screenshot 2024-05-21 185300](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/b08e4906-71c3-40cb-9695-0cd10187cb50)


DESKRIPSI PROGRAM :

Program tersebut merupakan program untuk mencari sebuah huruf pada sebuah kalimat yang sudah diinputkan dengan menggunakan binary search.

UNGUIDED 2

```c++
// fajar farizqi azmi
// 2311102192
// if-11-e

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string kalimat;
    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    int jumlahVokal = 0;
    char vokal[] = {'a', 'i', 'u', 'e', 'o', 'A', 'I', 'U', 'E', 'O'};
    int ukuranVokal = sizeof(vokal) / sizeof(vokal[0]);

    
    for (char huruf : kalimat)
    {
        for (int i = 0; i < ukuranVokal; i++)
        {
            if (huruf == vokal[i])
            {
                jumlahVokal++;
                break;
            }
        }
    }

    cout << "Jumlah huruf vokal dalam kalimat: " << jumlahVokal << endl;

    return 0;
}

```


Screnshoot OUTPUT :

![Screenshot 2024-05-21 185855](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/6393663e-9c2d-4fdd-9892-9da266f55edc)


DESKRIPSI PROGRAM :

Program merupakan program yang dapat menghitung banyaknya huruf vocal dalam sebuah kalimat

Unguided 3

```c++
// fajar farizqi azmi
// 2311102192
// if-11-e

#include <iostream>
using namespace std;
int countOccurrences(int arr[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;
    int occurrences = countOccurrences(data, sizeof(data) / sizeof(data[0]), target);
    cout << "Jumlah angka " << target << " dalam array: " << occurrences << endl;
    return 0;
}

```

screnshoot output :

![Screenshot 2024-05-21 185541](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/7d6b3ad5-6556-4711-b3aa-5ceb3602cd26)



deskripsi program :

Program tersebut merupakan program untuk menghitung berapa banyak angka 4 di dalam data dengan menggunakan algoritma Sequential Search

KESIMPULAN :

Pencarian (Searching) adalah proses untuk menemukan suatu nilai dalam kumpulan data. Dalam contoh program, kita menggunakan algoritma Sequential Search untuk mencari data dalam array yang tidak terurut, 
dan Binary Search untuk mencari data dalam array yang sudah terurut. Sequential Search memeriksa setiap elemen secara berurutan, sementara Binary Search membagi data menjadi dua bagian dan
membandingkan dengan data tengah. Program-program ini membantu dalam mencari keberadaan karakter, menghitung jumlah huruf vokal dalam kalimat, dan menghitung jumlah kemunculan angka dalam array. Pemahaman tentang algoritma
pencarian dan pemrosesan data menjadi kunci dalam pengembangan perangkat lunak yang efisien dan optimal dalam pengolahan data.

DAFTAR PUSTAKA :

[1] A Nurhakim - Jurnal SIGMA, 2019 - jurnal.pelitabangsa.ac.id

[2] Y Religia - Pelita Teknologi, 2019 - jurnal.pelitabangsa.ac.id
