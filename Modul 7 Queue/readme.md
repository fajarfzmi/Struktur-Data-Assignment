# <h1 align="center">LAPORAN PRAKTIKUM MODUL 7 QUEUE</h1>
<p align="center">FAJAR FARIZQI AZMI_2311102192_IF-11-E</p>




  Dasar Teori 

  Queue dalam bahasa Indonesia adalah antrian. Seperti konsep antri pada umumnya struktur data queue menganut konsep FIFO (First In First Out), 
dimana orang / data pertama yang masuk adalah data yang akan keluar pertama kali, 
begitu juga dengan data terakhir yang masuk maka akan di proses / keluar terakhir sesuai urutan.
Queue dapat diimplementasikan menggunakan Linked List dan Array, pointer dalam Queue Linked List menggunakan 2 buah pointer yaitu front dan rear ,
berbeda dengan Doubly Linked List, front rear disini untuk mengidentifikasi awal dan akhir dari antrian / queue.






Operasi dalam Queue :
1.	Enqueue enqueue digunakan untuk menginputkan data pada Queue, dengan cara mencari tail / rear di dalam queue tsb.
2.	Dequeue dequeue digunakan untuk menghapus, konsepnya sama seperti halnya antrian umumnya yaitu orang / data paling depanlah yang akan dihapus.
3.	Cara menghapusnya adalah memajukan head satu langkah kebelakang sehingga data paling awal berada di depan head sehingga tidak terbaca.
 
4.	Peek peek atau mengintip, digunakan untuk melihat data tanpa membuat perubahan / proses, biasanya digunakan untuk print data.
5.	isEmpty isEmpty digunakan untuk mengecek apakah queue dalam posisi kosong atau isi, biasanya digunakan untuk kondisi if else, misal jika antrian kosong maka program akan mengeluarkan “Antrian kosong”.
6.	isFull isFull digunakan untuk mengecek apakah queue dalam posisi penuh atau tidak, biasanya digunakan untuk menentukan apakah queue masih bisa di enqueue data atau tidak.
7.	Size Size digunakan untuk menghitung jumlah antrian yang ada saat ini, biasanya digunakan untuk memberitahu user jumlah antrian sekarang
 


GUIDED  

 
```C++
#include <iostream>
using namespace std;

const int maksimalQueue = 5; // Maksimal antrian
int front = 0;               // Penanda antrian
int back = 0;                // Penanda
string queueTeller[5];       // Fungsi pengecekan
bool isFull()
{ // Pengecekan antrian penuh atau tidak
    if (back == maksimalQueue)
    {
        return true; // =1
    }
    else
    {
        return false;
    }
}
bool isEmpty()
{ // Antriannya kosong atau tidak
    if (back == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void enqueueAntrian(string data)
{ // Fungsi menambahkan antrian
    if (isFull())
    {
        cout << "Antrian penuh" << endl;
    }
    else
    {
        if (isEmpty())
        { // Kondisi ketika queue kosong
            queueTeller[0] = data;
            front++;
            back++;
        }
        else
        { // Antrianya ada isi
            queueTeller[back] = data;
            back++;
        }
    }
}
void dequeueAntrian()
{ // Fungsi mengurangi antrian
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        for (int i = 0; i < back; i++)
        {
            queueTeller[i] = queueTeller[i + 1];
        }
        back--;
    }
}
int countQueue()
{ // Fungsi menghitung banyak antrian
    return back;
}
void clearQueue()
{ // Fungsi menghapus semua antrian
    if (isEmpty())
    {
        cout << "Antrian kosong" << endl;
    }
    else
    {
        for (int i = 0; i < back; i++)
        {
            queueTeller[i] = "";
        }
        back = 0;
        front = 0;
    }
}
void viewQueue()
{ // Fungsi melihat antrian
    cout << "Data antrian teller:" << endl;
    for (int i = 0; i < maksimalQueue; i++)
    {
        if (queueTeller[i] != "")
        {
            cout << i + 1 << ". " << queueTeller[i] <<

                endl;
        }
        else
        {
            cout << i + 1 << ". (kosong)" << endl;
        }
    }
}
int main()
{
    enqueueAntrian("Andi");
    enqueueAntrian("Maya");
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    dequeueAntrian();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    clearQueue();
    viewQueue();
    cout << "Jumlah antrian = " << countQueue() << endl;
    return 0;
}
```
output :

![Screenshot 2024-05-19 192329](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/dfdc2c84-931b-4f57-b8b1-b6132b684ac0)


DESKRIPSI PEOGRAM :

Program ini adalah implementasi sederhana dari struktur data antrian (queue) menggunakan array dalam bahasa C++. Dalam program ini, 
terdapat fungsi-fungsi berikut:
1.	isFull(): untuk memeriksa apakah antrian penuh.
2.	isEmpty(): untuk memeriksa apakah antrian kosong.
3.	enqueueAntrian(string data): untuk menambahkan data ke dalam antrian.
4.	dequeueAntrian(): untuk menghapus data dari antrian.
5.	countQueue(): untuk menghitung jumlah data dalam antrian.


UNGUIDED

UNGUIDED 1

```C++
// fajar farizqi azmi
// 2311102192
// IF-11-E

#include <iostream>
using namespace std;

struct Node
{
    string data; 
    Node *next; 
};


Node *front = NULL;
Node *back = NULL;


bool isEmpty()
{
    return front == NULL; 
}


void enqueueAntrian(string data)
{
    Node *newNode = new Node;
    newNode->data = data;    
    newNode->next = NULL;

    if (isEmpty())
    {
        front = back = newNode; 
    }
    else 
    {
        back->next = newNode; 
        back = newNode;       
    }
}


void dequeueAntrian()
{
    if (isEmpty()) 
    {
        cout << "Antrian kosong" << endl;
    }
    else 
    {
        Node *temp = front;  
        front = front->next;
        delete temp;         

        if (front == NULL) 
        {
            back = NULL;
        }
    }
}


int countQueue()
{
    int count = 0;       
    Node *curr = front;  
    while (curr != NULL) 
    {
        count++;          
        curr = curr->next;
    }
    return count; 
}


void clearQueue()
{
    while (!isEmpty()) 
    {
        dequeueAntrian();
    }
}


void viewQueue()
{
    cout << "[ Data antrian ]" << endl;
    if (isEmpty()) 
    {
        cout << "Data kosong" << endl;
        return;
    }

    int posisi = 1;    
    Node *curr = front; 
    while (curr != NULL) 
    {
        cout << posisi << ". " << curr->data << endl; 
        curr = curr->next;                            
        posisi++;                                     
    }
}

int main()
{
    enqueueAntrian("fajar");
    enqueueAntrian("faiz");
    viewQueue();                                            
    cout << "\nJumlah antrian = " << countQueue() << "\n\n"; 
    dequeueAntrian();                                       
    viewQueue();                                           
    cout << "\nJumlah antrian = " << countQueue() << "\n\n"; 
    clearQueue();                                           
    viewQueue();                                            
    cout << "\nJumlah antrian = " << countQueue() << "\n\n"; 

    return 0;
}

```

OUTPUT :

![Screenshot 2024-05-19 192729](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/0635914a-ae70-447c-95e9-e08a219536bd)


DESKRIPSI PROGRAM :

Program ini mengimplementasikan antrian menggunakan linked list dengan operasi dasar: menambah (enqueue), menghapus (dequeue), menghitung jumlah elemen (count), mengosongkan (clear),
dan menampilkan (view) isi antrian.
Kemudian Operasi-operasi ini didemonstrasikan dalam fungsi main untuk menunjukkan bagaimana antrian berperilaku pada setiap tahap operasi.

UNGUIDED 2

```C++

// fajar farizqi azmi
// 2311102192
// IF-11-E

#include <iostream>
#include <iomanip>
using namespace std;

struct Mahasiswa
{
    string nama;   
    long long nim;
};

struct Node
{
    Mahasiswa data; 
    Node *next;     
};


Node *front = NULL;
Node *back = NULL;


bool isEmpty()
{
    return front == NULL; 
}


void enqueueAntrian(string nama, long long nim192)
{
    Node *newNode = new Node;  
    newNode->data.nama = nama; 
    newNode->data.nim = nim192;   
    newNode->next = NULL;     

    if (isEmpty())
    {
        front = back = newNode;
    }
    else 
    {
        back->next = newNode; 
        back = newNode;      
    }
}


void dequeueAntrian()
{
    if (isEmpty()) 
    {
        cout << "Antrian kosong" << endl;
    }
    else 
    {
        Node *temp = front;  
        front = front->next;
        delete temp;         

        if (front == NULL) 
        {
            back = NULL;
        }
    }
}


int countQueue()
{
    int count = 0;      
    Node *curr = front;  
    while (curr != NULL)
    {
        count++;          
        curr = curr->next; 
    }
    return count; 
}


void clearQueue()
{
    while (!isEmpty()) 
    {
        dequeueAntrian(); 
    }
}


void viewQueue()
{
    cout << "[[[[[[[ Data antrian mahasiswa ]]]]]]]" << endl;
    if (isEmpty())
    {
        cout << "Data kosong !" << endl;
        return;
    }

    cout << "................................................" << endl;
    cout << "[           Nama         |       NIM           ]" << endl;
    cout << "................................................" << endl;

    Node *curr = front;  
    while (curr != NULL) 
    {
        cout << "[ " << setw(22) << left << curr->data.nama << " | " << setw(20) << left << curr->data.nim << "]" << endl; 
        curr = curr->next;                                                                                                 
    }
    cout << "................................................." << endl;
}

int main()
{
    enqueueAntrian("eno", 2222191907);
    enqueueAntrian("fajar", 2311102192);
    viewQueue(); 
    cout << "\nJumlah antrian = " << countQueue() << "\n\n";
    dequeueAntrian();
    viewQueue();      
    cout << "\nJumlah antrian = " << countQueue() << "\n\n";
    clearQueue(); 
    viewQueue();  
    cout << "\nJumlah antrian = " << countQueue() << "\n\n";

    return 0;
}

```


OUTPUT :

![Screenshot 2024-05-19 193516](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/cf17dbf4-8191-4ccd-bbc6-2f3fe0b48928)


DESKRIPSI PROGRAM :

Program ini mengimplementasikan antrian menggunakan linked list dengan operasi dasar: menambah (enqueue), menghapus (dequeue), menghitung jumlah elemen (count), mengosongkan (clear), 
dan menampilkan (view) isi antrian.

KESIMPULAN :

Queue adalah struktur data yang penting dalam pemrograman, khususnya dalam bahasa C++. Ia mengikuti prinsip First In First Out (FIFO), yang berarti elemen yang pertama masuk ke dalam 
queue akan menjadi yang pertama keluar. Implementasi queue dapat dilakukan dengan berbagai cara, termasuk menggunakan Linear Array, Circular Array, dan Linked-List.

DAFTAR PUSTAKA :

[1] Karumanchi, N. (2016). Data Structures and algorithms made easy: Concepts,
problems, Interview Questions. CareerMonk Publications.

[2] https://books.google.co.id/books?hl=id&lr=&id=tJIREAAAQBAJ&oi= fnd&pg=PP1&dq=queue+c%2B%2B&ots=6A0DOgUgjh&sig=c9FGW 4X3DFVyaAMicECuWBUQjnU&redir_esc=y#v=onepage&q=queue% 20c%2B%2B&f=false
