# <h1 align="center">LAPORAN PRAKTIKUM MODUL 4-LINKED LIST CIRCULAR</h1>
<p align="center">fajar farizqi azmi_2311102192_IF-11-E</p>




## Dasar Teori

Linked List Circular
linked list circular adalah variasi dari linked list di mana penunjuk berikutnya dari node terakhir menunjuk kembali ke
node head. Hal ini menciptakan struktur circular, di mana list tersebut tidak memiliki awal atau akhir yang pasti. 
Dalam linked list non-circular, penunjuk berikutnya dari node terakhir disetel ke nol, yang menunjukkan akhir list.[1]

Single linked list sircular:

Dalam Single linked list sircular, node terakhir dari list berisi penunjuk ke node pertama dari list.[2] 
Melintasi Single linked list sircular hingga kita mencapai node yang sama tempat kami memulai. 
Single linked list sircular tidak memiliki awal atau akhir. Tidak ada nilai null di bagian selanjutnya dari node mana pun.

Double linked list sircular:

Double linked list sircular memiliki properti Double linked list dan linked list sircular di mana dua 
elemen berurutan dihubungkan atau dihubungkan oleh penunjuk sebelumnya dan berikutnya dan node terakhir menunjuk ke node
pertama dengan penunjuk berikutnya dan juga node pertama menunjuk ke node terakhir dengan penunjuk sebelumnya.[2]

Linked List Non Circular:

Linked list non-circular adalah struktur data linear di mana setiap elemen terhubung ke elemen berikutnya, namun elemen 
terakhir tidak terhubung kembali ke elemen pertama atau ke elemen mana pun dalam linked list. Sebagai akibatnya,
traversing dari awal ke akhir linked list akan berakhir ketika mencapai elemen terakhir yang menunjuk ke nilai NULL.
Ini membuat manipulasi dan pengelolaan data menjadi lebih sederhana dan jelas, namun tidak memungkinkan traversing langsung
kembali ke elemen pertama setelah mencapai elemen terakhir.[2]

## GUIDED 1

```C++
#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *head;
Node *tail;

// inialisasi Node
void init()
{
    head = NULL;
    tail = NULL;
}

// pengecekan
bool isEmpty()
{
    if (head == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// tambah depan
void insertDepan(int nilai)
{
    // buat node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if (isEmpty())
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        baru->next = head;
        head = baru;
    }
}

// tambah belakang
void insertBelakang(int nilai)
{
    // buat node baru
    Node *baru = new Node;
    baru->data = nilai;
    baru->next = NULL;

    if (isEmpty())
    {
        head = tail = baru;
        tail->next = NULL;
    }
    else
    {
        tail->next = baru;
        tail = baru;
    }
}

// hitung jumlah list
int hitungList()
{
    Node *hitung;
    hitung = head;
    int jumlah = 0;

    while (hitung != NULL)
    {
        jumlah++;
        hitung = hitung->next;
    }

    return jumlah;
}

// tambah tengah
void insertTengah(int data, int posisi)
{
    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi diluar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan di tengah" << endl;
    }
    else
    {
        Node *baru, *bantu;
        baru = new Node();
        baru->data = data;

        // tranversing
        bantu = head;
        int nomor = 1;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// hapus depan
void hapusDepan()
{
    Node *hapus;

    if (!isEmpty())
    {
        if (head->next != NULL)
        {
            hapus = head;
            head = head->next;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!" << endl;
    }
}

// hapus belakang
void hapusBelakang()
{
    Node *hapus;
    Node *bantu;

    if (!isEmpty())
    {
        if (head != tail)
        {
            hapus = tail;
            bantu = head;

            while (bantu->next != tail)
            {
                bantu = bantu->next;
            }

            tail = bantu;
            tail->next = NULL;
            delete hapus;
        }
        else
        {
            head = tail = NULL;
        }
    }
    else
    {
        cout << "List Kosong!" << endl;
    }
}

// hapsu tengah
void hapusTengah(int posisi)
{
    Node *hapus, *bantu, *bantu2;

    if (posisi < 1 || posisi > hitungList())
    {
        cout << "Posisi di luar jangkauan" << endl;
    }
    else if (posisi == 1)
    {
        cout << "Posisi bukan di tengah" << endl;
    }
    else
    {
        int nomor = 1;
        bantu = head;

        while (nomor <= posisi)
        {
            if (nomor == posisi - 1)
            {
                bantu2 = bantu;
            }

            if (nomor == posisi)
            {
                hapus = bantu;
            }

            bantu = bantu->next;
            nomor++;
        }
        bantu2->next = bantu;
        delete hapus;
    }
}

// ubah depan
void ubahDepan(int data)
{
    if (!isEmpty())
    {
        head->data = data;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// ubah tengah
void ubahTengah(int data, int posisi)
{
    Node *bantu;

    if (!isEmpty())
    {
        if (posisi < 1 || posisi > hitungList())
        {
            cout << "Posisi di luar jangkauan" << endl;
        }
        else if (posisi == 1)
        {
            cout << "Posisi bukan di tengah" << endl;
        }
        else
        {
            bantu = head;
            int nomor = 1;

            while (nomor < posisi)
            {
                bantu = bantu->next;
                nomor++;
            }

            bantu->data = data;
        }
    }
    else
    {
        cout << "List masih kosong" << endl;
    }
}

// ubah belakang
void ubahBelakang(int data)
{
    if (!isEmpty())
    {
        tail->data = data;
    }
    else
    {
        cout << "List masih kosong" << endl;
    }
}

// hapus list
void clearList()
{
    Node *bantu, *hapus;
    bantu = head;

    while (bantu != NULL)
    {
        hapus = bantu;
        bantu = bantu->next;
        delete hapus;
    }

    head = tail = NULL;
    cout << "List berhasil terhapus!" << endl;
}

// tampilkan list
void tampil()
{
    Node *bantu;
    bantu = head;

    if (!isEmpty())
    {
        while (bantu != NULL)
        {
            cout << bantu->data << ends;
            bantu = bantu->next;
        }

        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init();

    insertDepan(3);
    tampil();
    insertBelakang(5);
    tampil();
    insertDepan(2);
    tampil();
    insertDepan(1);
    tampil();
    hapusDepan();
    tampil();
    hapusBelakang();
    tampil();
    insertTengah(7, 2);
    tampil();
    hapusTengah(2);
    tampil();
    ubahDepan(1);
    tampil();
    ubahBelakang(8);
    tampil();
    ubahTengah(11, 2);
    tampil();
    
    return 0;
}
```
## output :

![Screenshot 2024-04-03 225714](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/a5055ceb-e4cd-48fd-9ead-9d6aca7a9dd4)

deskripsi program :
program ini merupakan contoh implementasi sederhana dari linked list dalam C++, 
yang mencakup operasi-operasi dasar yang umum digunakan dalam struktur data ini.

## GUIDED 2

```C++
#include <iostream>

using namespace std;


// program single linked list circular

// deklarasi struct node
struct Node
{
    string data;
    Node *next;
};

Node *head, *tail, *baru, *bantu, *hapus;

void init()
{
    head = NULL;
    tail = head;
}

// pengecekan
bool isEmpty()
{
    if (head == NULL)
    {
        return 1; // true
    }
    else
    {
        return 0; // false
    }
}

// buat node baru
void buatNode(string data)
{
    baru = new Node;
    baru->data = data;
    baru->next = NULL;
}

// hitung list
int hitungList()
{
    bantu = head;
    int jumlah = 0;

    while (bantu != NULL)
    {
        jumlah++;
        bantu = bantu->next;
    }

    return jumlah;
}

// tambah depan
void insertDepan(string data)
{
    // buat node baru
    buatNode(data);

    if (isEmpty())
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        baru->next = head;
        head = baru;
        tail->next = head;
    }
}

// tambah belakan
void insertBelakang(string data)
{
    // buat node baru
    buatNode(data);

    if (isEmpty())
    {
        head = baru;
        tail = head;
        tail->next = head;
    }
    else
    {
        while (tail->next != head)
        {
            tail = tail->next;
        }

        tail->next = baru;
        baru->next = head;
        tail = baru;
    }
}

// tambah tengah
void insertTengah(string data, int posisi)
{
    if (isEmpty())
    {
        head = baru;
        tail = head;
        baru->next = head;
    }
    else
    {
        baru->data = data;

        // transversing
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        baru->next = bantu->next;
        bantu->next = baru;
    }
}

// hapus depan
void hapusDepan()
{
    if (!isEmpty())
    {
        hapus = head;
        tail = head;

        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;

            delete hapus;
        }
        else
        {
            while (tail->next != hapus)
            {
                tail = tail->next;
            }

            head = head->next;
            tail->next = head;
            hapus->next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus belakang
void hapusBelakang()
{
    if (!isEmpty())
    {
        hapus = head;
        tail = head;

        if (hapus->next == head)
        {
            head = NULL;
            tail = NULL;

            delete hapus;
        }
        else
        {
            while (hapus->next != head)
            {
                hapus = hapus->next;
            }

            while (tail->next != hapus)
            {
                tail = tail->next;
            }

            tail->next = head;
            hapus->next = NULL;

            delete hapus;
        }
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus tengah
void hapusTengah(int posisi)
{
    if (!isEmpty())
    {
        // transversing
        int nomor = 1;
        bantu = head;

        while (nomor < posisi - 1)
        {
            bantu = bantu->next;
            nomor++;
        }

        hapus = bantu->next;
        bantu->next = hapus->next;

        delete hapus;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

// hapus list
void clearList()
{
    if (head != NULL)
    {
        hapus = head->next;

        while (hapus != head)
        {
            bantu = hapus->next;
            delete hapus;
            hapus = bantu;
        }

        delete head;
        head = NULL;
    }

    cout << "List berhasil terhapus!" << endl;
}

// tampilkan list
void tampil()
{
    if (!isEmpty())
    {
        tail = head;
        do
        {
            cout << tail->data << ends;
            tail = tail->next;
        } while (tail != head);

        cout << endl;
    }
    else
    {
        cout << "List masih kosong!" << endl;
    }
}

int main()
{
    init();
    insertDepan("Ayam");
    tampil();
    insertDepan("Bebek");
    tampil();
    insertBelakang("Cicak");
    tampil();
    insertBelakang("Domba");
    tampil();
    hapusBelakang();
    tampil();
    hapusDepan();
    tampil();
    insertTengah("Sapi", 2);
    tampil();
    hapusTengah(2);
    tampil();

    return 0;
}
```

## OUTPUT : 

![Screenshot 2024-04-03 230234](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/7455f6b6-3c1f-4d16-bb01-2cd091f26128)

DESKRIPSI PROGRAM :
Program tersebut merupakan implementasi dari single linked list circular dalam bahasa pemrograman C++. 
Linked list circular adalah jenis linked list dimana ujung terakhir dari list terhubung kembali ke ujung pertama, membentuk lingkaran atau cincin.

## UNGUIDED 

## unguided 1

```c++

// fajar farizqi azmi
// 2311102192
// if-11-e

#include <iostream>
#include <cstring>
using namespace std;

struct Node
{
    string nama, nim;
    Node *next;
};

Node *head = NULL;


void tambahDepan()
{
    cout << "\n [Tambah Depan]" << endl;
    cout << "" << endl;
    string nama, nim;
    cout << "Masukkan Nama: ";
    getline(cin >> ws, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);

    Node *newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = head;
    head = newNode;
    cout << "" << endl;
    cout << "Data telah ditambahkan" << endl;
}


void tambahBelakang()
{
    cout << "\n [Tambah Belakang]" << endl;
    cout << "" << endl;
    string nama, nim;
    cout << "Masukkan Nama: ";
    getline(cin >> ws, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);

    Node *newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    cout << "" << endl;
    cout << "Data telah ditambahkan" << endl;
}


void tambahTengah()
{
    cout << "\n [Tambah Tengah]" << endl;
    cout << "" << endl;
    string nama, nim;
    int posisi;
    cout << "Masukkan Nama: ";
    getline(cin >> ws, nama);
    cout << "Masukkan NIM: ";
    getline(cin, nim);
    cout << "Masukkan Posisi: ";
    cin >> posisi;

    Node *newNode = new Node;
    newNode->nama = nama;
    newNode->nim = nim;

    if (posisi == 1)
    {
        newNode->next = head;
        head = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 1; i < posisi - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Posisi tidak valid" << endl;
                return;
            }
            temp = temp->next;
        }
        if (temp == NULL)
        {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    cout << "" << endl;
    cout << "Data telah ditambahkan" << endl;
}


void ubahDepan()
{
    cout << "\n [Ubah Depan]" << endl;
    cout << "" << endl;
    if (head == NULL)
    {
        cout << "Linked list kosong" << endl;
        return;
    }

    string nama, nim;
    cout << "Masukkan nama baru: ";
    getline(cin >> ws, nama);
    cout << "Masukkan NIM baru: ";
    getline(cin, nim);

    head->nama = nama;
    head->nim = nim;

    cout << "" << endl;
    cout << "Data " << nama << " telah diubah" << endl;
}


void ubahBelakang()
{
    cout << "" << endl;
    cout << "\n [Ubah Belakang]" << endl;
    if (head == NULL)
    {
        cout << "Linked list kosong" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    string nama, nim;
    cout << "Masukkan nama baru: ";
    getline(cin >> ws, nama);
    cout << "Masukkan NIM baru: ";
    getline(cin, nim);

    temp->nama = nama;
    temp->nim = nim;

    cout << "" << endl;
    cout << "Data " << nama << " telah diubah" << endl;
}


void ubahTengah()
{
    cout << "\n [Ubah Tengah]" << endl;
    cout << "" << endl;
    if (head == NULL)
    {
        cout << "Linked list kosong" << endl;
        return;
    }

    int posisi;
    cout << "Masukkan posisi: ";
    cin >> posisi;

    Node *temp = head;
    for (int i = 1; i < posisi; i++)
    {
        if (temp == NULL)
        {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        cout << "Posisi tidak valid" << endl;
        return;
    }

    string nama, nim;
    cout << "Masukkan nama baru: ";
    getline(cin >> ws, nama);
    cout << "Masukkan NIM baru: ";
    getline(cin, nim);

    temp->nama = nama;
    temp->nim = nim;

    cout << "" << endl;
    cout << "Data " << nama << " telah diubah" << endl;
}


void hapusDepan()
{
    cout << "\n [Hapus Depan]" << endl;
    cout << "" << endl;
    if (head == NULL)
    {
        cout << "Linked list kosong" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;

    cout << "" << endl;
    cout << "Data depan telah dihapus" << endl;
}


void hapusBelakang()
{
    cout << "\n [Hapus Belakang]" << endl;
    cout << "" << endl;
    if (head == NULL)
    {
        cout << "Linked list kosong" << endl;
        return;
    }

    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        cout << "Data telah dihapus" << endl;
        return;
    }

    Node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    Node *deleteNode = temp->next;
    temp->next = NULL;
    delete deleteNode;

    cout << "" << endl;
    cout << "Data akhir telah dihapus" << endl;
}


void hapusTengah()
{
    cout << "\n [Hapus Tengah]" << endl;
    cout << "" << endl;
    if (head == NULL)
    {
        cout << "Linked list kosong" << endl;
        return;
    }

    int posisi;
    cout << "Masukkan posisi: ";
    cin >> posisi;

    if (posisi == 1)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Data telah dihapus" << endl;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < posisi - 1; i++)
    {
        if (temp == NULL)
        {
            cout << "Posisi tidak valid" << endl;
            return;
        }
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL)
    {
        cout << "Posisi tidak valid" << endl;
        return;
    }

    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;

    cout << "" << endl;
    cout << "Data ke-" << posisi << " telah dihapus" << endl;
}


void hapusSeluruhData()
{
    Node *temp = head;
    while (temp != NULL)
    {
        Node *deleteNode = temp;
        temp = temp->next;
        delete deleteNode;
    }
    head = NULL;
    cout << "Seluruh data telah dihapus" << endl;
}


void tampilkanData()
{
    Node *temp = head;
    cout << "DATA MAHASISWA" << endl;
    cout << "|| NAMA "
         << "  |  "
         << "NIM"
         << "\t ||"
         << "\n"
         << endl;
    while (temp != NULL)
    {
        cout << temp->nama << "\t  |" << temp->nim << endl;
        temp = temp->next;
    }
}

int main()
{
    int pilihan;
    do
    {
        cout << "\n||PROGAM SINGLE LINKED LIST NON-CIRCULAR||"
             << "\n"
             << endl;
        cout << "---------------------" << endl;
        cout << "|   Tampilan Menu:  |" << endl;
        cout << "---------------------" << endl;
         cout <<"---------------------" << endl;
        cout << "| 1. Tambah Depan   |" << endl;
        cout << "| 2. Tambah Belakang|" << endl;
        cout << "| 3. Tambah Tengah  |" << endl;
        cout << "| 4. Ubah Depan     |"<< endl;
        cout << "| 5. Ubah Belakang  |" << endl;
        cout << "| 6. Ubah Tengah    |" << endl;
        cout << "| 7. Hapus Depan    |" << endl;
        cout << "| 8. Hapus Belakang |" << endl;
        cout << "| 9. Hapus Tengah   |" << endl;
        cout << "| 10. Hapus List    |" << endl;
        cout << "| 11. TAMPILKAN     |" << endl;
        cout << "| 0. KELUAR         |" << endl;
         cout <<"--------------------- " << endl;
        cout << "Pilih Operasi: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            tambahDepan();
            break;
        case 2:
            tambahBelakang();
            break;
        case 3:
            tambahTengah();
            break;
        case 4:
            ubahDepan();
            break;
        case 5:
            ubahBelakang();
            break;
        case 6:
            ubahTengah();
            break;
        case 7:
            hapusDepan();
            break;
        case 8:
            hapusBelakang();
            break;
        case 9:
            hapusTengah();
            break;
        case 10:
            hapusSeluruhData();
            break;
        case 11:
            tampilkanData();
            break;
        case 0:
            cout << "Terima kasih!" << endl;
            break;
        default:
            cout << "Pilihan tidak valid" << endl;
        }
    } while (pilihan != 0);

    return 0;
}

```

## OUTPUT :

## TAMPILAN MENU :

![Screenshot 2024-06-06 061801](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/b80ff646-9d06-42e4-bab7-97ef6a765b13)

## TAMPILAN OPERASI TAMBAH :

![Screenshot 2024-06-06 061831](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/30c24e52-0907-4fae-b2b5-a64d62191ab6)
![Screenshot 2024-06-06 062548](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/453606c0-f7f3-490f-b855-62f7fb3cf73d)
![Screenshot 2024-06-06 064000](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/b990ecfe-c2c8-498d-8c4e-6730b876243c)

## TAMPILAN OPERASI HAPUS :

![Screenshot 2024-06-06 062642](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/c37e3114-374b-4ccc-b521-377b97c14ecc)
![Screenshot 2024-06-06 063208](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/3d13ef57-b12c-48f1-b178-fee53f2e827a)

## TAMPILAN OPERASI UBAH :

![Screenshot 2024-06-06 062801](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/e6fd68ca-237f-4fd3-b052-ebb200d17bbb)
![Screenshot 2024-06-06 062900](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/5e903118-f672-4880-92e5-88537c988318)


## TAMPILAN OPERASI TAMPIL DATA :

![Screenshot 2024-06-06 063052](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/bfa8151e-53bd-4970-a03d-eb3c0030f336)

## NO 2.Setelah membuat menu tersebut, masukkan data sesuai urutan berikut, lalu
## tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang atau
## tengah)

![Screenshot 2024-06-06 070224](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/30b67de8-d050-4133-aa5e-8964467c9cfe)

## NO 3. LAKUKAN PERINTAH BERIKUT 

## a) tampilkan data berikut diantara farel dan denis

![Screenshot 2024-06-06 070651](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/69e10ce6-d97e-45f9-bc1b-37df24492d1d)

## b) hapus data denis

![Screenshot 2024-06-06 070728](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/b02db191-9d20-42fa-ad98-8ae2cd3e7274)

## c) tambah data berikut di awal

![Screenshot 2024-06-06 070824](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/36b5a372-126d-45b0-87e6-1abe4082e59b)

## d) tambah data berikut di akhir

![Screenshot 2024-06-06 070908](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/2957cfb1-d9bf-4740-9880-9eea0f9570cb)

## e) ubah data udin menjadi data berikut

![Screenshot 2024-06-06 071320](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/c9693cbd-d4b3-47ee-bc13-221fadd1ee31)

## f) ubah data terakhir menjadi berikut

![Screenshot 2024-06-06 071414](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/d38af6c9-b57a-4c2d-8298-5d0de74a122c)

## g) hapus data awal

![Screenshot 2024-06-06 071446](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/b489d1c5-04ed-4198-9118-e876eeba8a75)

## h) ubah data awal menjadi berikut

![Screenshot 2024-06-06 071548](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/7c8d7aab-e60b-4206-8565-6f95b9936e25)

## i) hapus data akhir

![Screenshot 2024-06-06 071607](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/26f4c42f-2371-416a-9000-b48e7aa18184)

## j) tampilkan seluruh data

![Screenshot 2024-06-06 071638](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/3179a612-b2f7-41c3-b87e-0cdb2e053d7a)

## DESKRIPSI PROGRAM :

Program ini memungkinkan pengguna untuk menambahkan, mengubah, dan menghapus node dalam sebuah linked list serta menampilkan seluruh data yang ada dalam linked list. Menu interaktif memudahkan pengguna untuk berinteraksi dengan linked list.

## KESIMPULAN :

Linked List non circular adalah struktur data yang terdiri dari node denganpointer yang menunjuk ke node berikutnya, kecuali pada node terakhir yang
menunjuk ke nilai null sebagai penanda akhir dari linked list. Sedangkan Linkedlist circular adalah struktur data yang digunakan yang terdiri dari 
kumpulansimpul (node) yang terhubung dengan pointer yang saling terkait membentuk sirkuit. 

## referensi :

[1] RMS Anita Sindar - 2019 - books.google.com

[2] E Erkamim, I Abdurrohim, S Yuliyanti, R Karim… - 2024 - books.google.com

