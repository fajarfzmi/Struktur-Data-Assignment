# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Arvinanto Bahtiar</p>

## Dasar Teori


Tipe data adalah adalah sebuah pengklasifikasian data berdasarkan jenis data tersebut. Tipe data dibutuhkan agar kompiler dapat mengetahui bagaimana sebuah data akan digunakan.


### A.Tipe Data Primitif
Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, tipe data primitif ini disediakan oleh banyak bahasa pemrograman, perbedaannya terletak pada jumlah bit yang dialokasikan untuk setiap bit pada tipe data primitif tergantung pada bahasa pemrograman,compiler dan sistem operasinya


### B.Tipe Data Abstrak
Tipe data abstrak atau yang biasa disebut Abstrak Data Tipe(ADT) merupakan tipe data yang dibentuk oleh programer itu sendiri. Pada tipe data abstrak bisa berisi banyak tipe data, jadi nilainya bisa lebih dari satu dan beragam tipe data. Fitur Class adalah fitur Object Oriented Program(OPP) pada bahasa C++ yang mirip dengan fitur data structures Struct pada bahasa C.


### C.Tipe Data Koleksi
Tipe data koleksi (Collection Data Type) adalah tipe data yang digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Tipe data koleksi memungkinkan Anda menyimpan, mengelola, dan mengakses sejumlah besar data dengan cara yang terstruktur


## Guided 

### 1. Tipe Data Primitif

```C++
#include <iostream>
using namespace std;
// Main program
int main()
{
char op;
float num1, num2;
// It allows user to enter operator i.e. +, -, *, /
cin >> op;
// It allow user to enter the operands
cin >> num1 >> num2;
// Switch statement begins

Praktikum Struktur Data dan Algoritma 2

switch (op)
{
// If user enter +
case '+':
cout << num1 + num2;
break;
// If user enter -
case '-':
cout << num1 - num2;
break;
// If user enter *
case '*':
cout << num1 * num2;
break;
// If user enter /
case '/':
cout << num1 / num2;
break;
// If the operator is other than +, -, * or /,
// error message will display
default:
cout << "Error! operator is not correct";
} // switch statement ends
return 0;
}
```
Program C++ di atas adalah sebuah kalkulator sederhana yang meminta pengguna untuk memasukkan operator (+, -, *, /) dan dua bilangan. Setelah menerima input, program akan melakukan operasi aritmatika yang sesuai dan menampilkan hasilnya

### 2. [Tipe Data Abstrak]

```C++
#include <stdio.h>
//Struct
struct Mahasiswa
{
const char *name;
const char *address;
int age;
};
int main()
{
// menggunakan struct
struct Mahasiswa mhs1, mhs2;
// mengisi nilai ke struct
mhs1.name = "Dian";
mhs1.address = "Mataram";
mhs1.age = 22;
mhs2.name = "Bambang";
mhs2.address = "Surabaya";

Praktikum Struktur Data dan Algoritma 3

mhs2.age = 23;
// mencetak isi struct
printf("## Mahasiswa 1 ##\n");
printf("Nama: %s\n", mhs1.name);
printf("Alamat: %s\n", mhs1.address);
printf("Umur: %d\n", mhs1.age);
printf("## Mahasiswa 2 ##\n");
printf("Nama: %s\n", mhs2.name);
printf("Alamat: %s\n", mhs2.address);
printf("Umur: %d\n", mhs2.age);
return 0;
}
```
Program di atas adalah sebuah program dalam bahasa pemrograman C++ yang menggunakan struktur (struct) untuk menyimpan informasi tentang mahasiswa. Program ini digunakan untuk menyimpan dan mencetak informasi tentang dua mahasiswa: nama, alamat, dan umur.

### 3. [Tipe Data Koleksi]

```C++
#include <iostream>
using namespace std;
int main()
{
//deklarasi dan inisialisasi array
int nilai[5];
nilai[0] = 23;
nilai[1] = 50;
nilai[2] = 34;
nilai[3] = 78;
nilai[4] = 90;
//mencetak array
cout << "Isi array pertama :" << nilai[0] << endl;
cout << "Isi array kedua :" << nilai[1] << endl;
cout << "Isi array ketiga :" << nilai[2] << endl;
cout << "Isi array keempat :" << nilai[3] << endl;
cout << "Isi array kelima :" << nilai[4] << endl;
return 0;
}
```
Program di atas adalah program sederhana dalam bahasa C++ yang menggunakan array untuk menyimpan beberapa nilai integer. Baris pertama mendeklarasikan yang terdiri dari 5 elemen bertipe integer. Jadi, program tersebut hanya mendeklarasikan, menginisialisasi, dan mencetak isi array bertipe integer.

## Unguided 

### 1. [Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!]

```C++
#include <iostream> 

using namespace std;

int tambah(int x, int y) {
return x + y;
}

float kali(float m, float n){
return m * n;
}

int main() {
int x = 200; 
int y = 30; 
float m = 8; 
float n = 4;

cout << "Hasil penjumlahan	dari 200 + 30 adalah " << tambah(x, y) << endl;
cout << "Hasil perkalian 8 x 4 adalah " << kali(m, n);
}

```
#### Output:
![Fajar_Screenshot-Output-Unguided-1](https://github.com/fajarfzmi/Struktur-Data-Assignment/blob/main/Laprak/Screenshot-Output-Unguided-1.png)

Tipe data primitif adalah tipe data yang sudah ditentukan oleh sistem, dan jumlah bit yang dialokasikan untuk setiap tipe data primitif tergantung pada bahasa pemrograman, compiler, dan sistem operasinya.

### 2. [Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya]

```C++
#include <iostream> 
#include <string> 

using namespace std;

struct mahasiswa{ 
    string nama; string jurusan; float ipk;
};

int main(){

mahasiswa mhs;

mhs.nama="fajar farizqi azmi"; 
mhs.jurusan="Teknik Informatika"; 
mhs.ipk=4.00;

cout<<"DATA MAHASISWA"<<endl;
cout<<"Nama	: "<<mhs.nama<<endl; 
cout<<"Jurusan : "<<mhs.jurusan<<endl; 
cout<<"IPK	: "<<mhs.ipk<<endl;

return 0;
}
```
#### Output:
![Fajar_Screenshot-Output-Unguided-2](https://github.com/fajarfzmi/Struktur-Data-Assignment/blob/main/Laprak/Screenshot-Output-Unguided-2.png)
Program di atas merupakan contoh penggunaan struktur (struct) dalam bahasa pemrograman C++. Struktur digunakan untuk menggabungkan beberapa tipe data yang berbeda ke dalam satu kesatuan. Program tersebut akan mencetak informasi mengenai seorang mahasiswa, yang terdiri dari nama, jurusan, dan IPK, sesuai dengan nilai yang telah diinisialisasi sebelumnya dalam program. Program ini menunjukkan bagaimana struktur dapat digunakan untuk mengorganisir dan mengelola data-data yang terkait dalam sebuah kesatuan yang lebih besar.

Fungsi Class dan Struct
Struct adalah tipe data yang digunakan untuk mengelompokkan beberapa variabel yang mungkin memiliki tipe data yang berbeda ke dalam satu kesatuan.Biasanya digunakan untuk menyimpan data yang terkait secara terorganisir, tetapi tidak menyediakan banyak fitur lainnya.Default akses ke anggota struct adalah public, kecuali diubah secara eksplisit.
Class adalah struktur data yang lebih kompleks dibandingkan struct. Selain menyimpan data, class juga dapat menyertakan fungsi-fungsi (metode) yang beroperasi pada data tersebut.Class memiliki akses kontrol yang lebih kuat, seperti private, protected, dan public, yang memungkinkan pembatasan akses ke anggota-anggota class.Class menerapkan konsep encapsulation, yang berarti menyembunyikan rincian implementasi dan hanya mengekspos operasi yang diperlukan melalui antarmuka public, Class mendukung konsep inheritance dan polymorphism.

### 3. [Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map]

```C++
#include <iostream> 
#include <map> 
#include <string> 

using namespace std;

int main() {
map <int, string> nama_mahasiswa { { 1, "faiz"}, { 2, "Bayu" },
{ 3, "novi" }, { 4, "Tio" }, { 5, "darmaji" } };

cout << nama_mahasiswa[1] << " " << nama_mahasiswa[5] << " " << nama_mahasiswa[3]<< endl;
}
```
#### Output:
![Fajar_Screenshot-Output-Unguided-3](https://github.com/fajarfzmi/Struktur-Data-Assignment/blob/main/Laprak/Screenshot-Output-Unguided-3.png)
Program di atas adalah contoh penggunaan fungsi map dalam C++ untuk menyimpan data mahasiswa dengan menggunakan nomor identitas (integer) sebagai kunci dan nama mahasiswa (string) sebagai nilai


Perbedaan Array dan Map
Array merupakan struktur data linear yang terdiri dari kumpulan elemen dengan tipe data yang sama, yang disusun secara berurutan di dalam memori. Elemen-elemen dalam array diakses menggunakan indeks numerik yang dimulai dari 0 dan berurutan. Ukuran array harus ditentukan pada saat deklarasi dan tidak dapat diubah selama program berjalan. Elemen-elemen array dapat diakses dan dimodifikasi dengan cepat dengan menggunakan indeks numerik.
 





Map adalah struktur data asosiatif yang mengaitkan kunci unik dengan nilai tertentu. Setiap kunci dalam map berhubungan dengan satu nilai. Elemen-elemen dalam map diakses berdasarkan kunci, bukan indeks numerik. Map dapat tumbuh dan menyusut secara dinamis sesuai dengan penambahan atau penghapusan elemen. Penyisipan, penghapusan, dan pencarian elemen dalam map memiliki kompleksitas waktu yang lebih tinggi daripada array, tetapi memungkinkan pengelompokan data yang lebih fleksibel.

## Kesimpulan
Dalam pemrograman, tipe data dapat dikelompokkan menjadi tipe data primitif, tipe data abstrak, dan koleksi. Tipe data primitif adalah tipe data dasar yang disediakan oleh bahasa pemrograman, seperti integer, float, char, dan bool. Tipe data abstrak adalah tipe data yang didefinisikan oleh pengguna atau programer, seperti array, list, stack, queue, dan tree. Sedangkan koleksi adalah kumpulan dari beberapa elemen yang terdiri dari satu atau lebih tipe data, seperti array, vector, set, map, dan hash table.
## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.