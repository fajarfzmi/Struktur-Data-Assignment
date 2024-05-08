# <h1 align="center">LAPORAN PRAKTIKUM MODUL 6 STACK</h1>
<p align="center">FAJAR FARIZQI AZMI_2311102192_IF-11-E</p>




  Dasar Teori

  Pengertian STACK
      Stack adalah struktur data sederhana yang digunakan untuk menyimpan data (mirip dengan linked list). atau tumpukan merupakan sebuah kumpulan data yang 
  diletakan di atas data lain, seperti tumpukan rak buku. Satu hal yang perlu kita ingat adalah bahwa kitab bisa menambah data dan mengambil data lewat ujung yang sama,
  yang disebut sebagai ujung atas tumpukan (top of stack). Lifo (last in First Out) adalah sifat dari Stack data yang di simpan terakhir akan di ambil lebih terdahulu, data yang diseimpan pertama kali akan diambil paling akhir

GUIDED 1

```c++
#include <iostream>
using namespace std;

string arrayBuku[5];
int maksimal = 5, top = 0;

bool isFull()
{
    return (top == maksimal);
}

bool isEmpety()
{
    return (top == 0);
}

void pushArrayBuku(string data)
{
    if (isFull())
    {
        cout << "Data telah penuh" << endl;
    }
    else
    {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBuku()
{
    if (isEmpety())
    {
        cout << " Tidak ada data yang dihapus" << endl;
    }
    else
    {
        arrayBuku[top - 1] = "";
        top--;
    }
}

void peekArrayBuku(int posisi)
{
    if (isEmpety())
    {
        cout << "Tidak ada data yang bisa dilihat" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        cout << "Posisi ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack()
{
    return top;
}

void changeArrayBuku(int posisi, string data)
{
    if (posisi > top)
    {
        cout << "Posisi melebihi data yang ada" << endl;
    }
    else
    {
        int index = top;
        for (int i = 1; i <= posisi; i++)
        {
            index--;
        }
        arrayBuku[index] = data;
    }
}

void destroyArraybuku()
{
    for (int i = top; i >= 0; i--)
    {
        arrayBuku[i] = "";
    }
    top = 0;
}

void cetakArrayBuku()
{
    if (isEmpety())
    {
        cout << "Tidak ada data yang dicetak" << endl;
    }
    else
    {
        for (int i = top - 1; i >= 0; i--)
        {
            cout << arrayBuku[i] << endl;
        }
    }
}

int main()
{
    pushArrayBuku("Kalkulus");
    pushArrayBuku("Struktur Data");
    pushArrayBuku("Matematika Diskrit");
    pushArrayBuku("Dasar Multimedia");
    pushArrayBuku("Inggris");

    cetakArrayBuku();
    cout << "\n";

    cout << "Apakah data stack penuh? " << isFull() << endl;
    cout << "Apakah data stack kosong? " << isEmpety() << endl;

    peekArrayBuku(2);
    popArrayBuku();
    cout << "Banyaknya data = " << countStack() << endl;

    changeArrayBuku(2, "Bahasa Jerman");
    cetakArrayBuku();

    cout << "\n";
    destroyArraybuku();
    cout << "Jumlah data setelah dihapus: " << top << endl;

    cetakArrayBuku();

    return 0;
}
```
output :

![Screenshot 2024-05-08 212654](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/c3d978eb-6f4e-4618-bd73-2e048b3d0428)

DESKRIPSI PEOGRAM :

 Program tersebut merupakan implementasi struktur data stack. Stack adalah tumpukan data yang mengikuti prinsip LIFO (Last In First Out), 
 yang berarti elemen terakhir yang dimasukkan ke dalam stack akan menjadi elemen pertama yang dikeluarkan dari stack.

UNGUIDED

UNGUIDED 1

```C++

// fajar farizqi azmi
// 2311102192
// if-11-e
#include <iostream>
#include <stack>
#include <string>
#include <locale>

using namespace std;


string removeNonAlphanumeric(string str) {
    string result = "";
    for (char c : str) {
        if (isalnum(c)) {
            result += tolower(c); 
        }
    }
    return result;
}


bool isPalindrome(string str) {
    stack<char> charStack;
    int length = str.length();

   
    for (int i = 0; i < length / 2; i++) {
        charStack.push(str[i]);
    }

    
    for (int i = (length + 1) / 2; i < length; i++) {
        if (charStack.top() != str[i]) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    string input;
    cout << "Masukkan kalimat: ";
    getline(cin, input);

    
    string cleanedInput = removeNonAlphanumeric(input);

    if (isPalindrome(cleanedInput)) {
        cout << "Kalimat tersebut adalah palindrom." << endl;
    } else {
        cout << "Kalimat tersebut bukan palindrom." << endl;
    }

 return 0;
}
```

OUTPUT :

![Screenshot 2024-05-08 212729](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/846083a6-c3e4-424d-afa2-22a0ed129982)

DESKRIPSI PROGRAM :

Program tersebut adalah program untuk mengecek apakah kalimat atau kata tersebut adalah palindrom atau bukan.

UGNUIDED 2

```C++
#include <iostream>
using namespace std;

// fajar farizqi azmi
// 2311102192
// if-11-e

     struct tumpukan
    {
         string isi[192]; int atas;
         };


     void push(tumpukan &T, const string &x)
    {
         if (T.atas == 192)
         {
             cout << "Tumpukan Sudah Penuh"; return;
             }


     T.atas++; T.isi[T.atas] = x;
    }


      string pop(tumpukan &T)
    {
      if (T.atas == 0)
    {
             cout << "Tumpukan sudah kosong";
     return "";
    }


         string hasil = T.isi[T.atas]; T.atas--;
     return hasil;
 }


  int main()
 {
     string kalimat; tumpukan T; T.atas = 0;

         cout << "Masukkan kata: "; getline(cin, kalimat);

         cout << "\nData asli: " << kalimat;


     for (char c : kalimat)
    {
         push(T, string(1, c));
        }


            cout << "\nData: "; while (T.atas > 0)
        {
      cout << pop(T);
    }


  cout << "\n\n";
 
  return 0;
}
```

OUTPUT :

![Screenshot 2024-05-08 212817](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/b8b15066-71c0-40a2-8877-f54da718f432)

DESKRIPSI PROGRAM :

Program ini menggunakan pendekatan iteratif untuk memproses karakter-karakter dalam kalimat dan mengimplementasikan struktur data tumpukan secara sederhana.
ATAU Program tersebut adalah implementasi stack menggunakan struktur data yang bertujuan untuk membalikkan sebuah kata atau kalimat.

KESIMPULAN :

  Penggunaan struktur data tumpukan (stack) untuk menyimpan dan mengelola data secara LIFO (Last-In-First-Out). Program-program tersebut mengimplementasikan
operasi dasar tumpukan seperti push, pop, peek, count, change, dan destroy. Masing-masing program menggunakan array sebagai struktur penyimpanan untuk 
elemen-elemen tumpukan dan memiliki variabel top untuk melacak posisi elemen teratas. Dengan memahami konsep tumpukan dan operasi dasarnya, 
kita dapat mengaplikasikannya dalam berbagai konteks untuk memecahkan masalah dan mengelola data dengan efisien.

DAFTAR PUSTAKA :

-> Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts,
problems, Interview Questions. CareerMonk Publications.

-> Seminar Nasional Aplikasi Teknologi Informasi (SNATI), 2011 - journal.uii.ac.id



