# <h1 align="center">LAPORAN PRAKTIKUM MODUL 4-LINKED LIST CIRCULAR</h1>
<p align="center">fajar farizqi azmi_2311102192_IF-11-E</p>




Dasar Teori

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

GUIDED 1

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
output :

![Screenshot 2024-04-03 225714](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/a5055ceb-e4cd-48fd-9ead-9d6aca7a9dd4)

deskripsi program :
program ini merupakan contoh implementasi sederhana dari linked list dalam C++, 
yang mencakup operasi-operasi dasar yang umum digunakan dalam struktur data ini.

GUIDED 2

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

OUTPUT : 

![Screenshot 2024-04-03 230234](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/7455f6b6-3c1f-4d16-bb01-2cd091f26128)

DESKRIPSI PROGRAM :
Program tersebut merupakan implementasi dari single linked list circular dalam bahasa pemrograman C++. 
Linked list circular adalah jenis linked list dimana ujung terakhir dari list terhubung kembali ke ujung pertama, membentuk lingkaran atau cincin.

UNGUIDED 

unguided 1

```C++
//fajar farizqi azmi
//2311102192
//if-11-e

#include <iostream>
#include <cstring>
using namespace std;

// Struktur untuk node linked list
struct Node
{
    string nama, nim;
    Node *next;
};

     Node *head = NULL; // Pointer untuk head linked list

// Fungsi untuk menambahkan node baru di awal linked list
void tambahDepan()
{
    cout << "\n [[Tambah Depan]]" << endl;
                
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

// Fungsi untuk menambahkan node baru di akhir linked list
void tambahBelakang()
{
    cout << "\n [[Tambah Belakang]]" << endl;
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

// Fungsi untuk menambahkan node baru di tengah linked list
void tambahTengah()
{
    cout << "\n [[Tambah Tengah]]" << endl;
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

// Fungsi untuk mengubah data node di awal linked list
void ubahDepan()
{
    cout << "\n [[Ubah Depan]]" << endl;
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

// Fungsi untuk mengubah data node di akhir linked list
void ubahBelakang()
{
    cout << "" << endl;
    cout << "\n [[Ubah Belakang]]" << endl;
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

// Fungsi untuk mengubah data node di tengah linked list
void ubahTengah()
{
    cout << "\n [[Ubah Tengah]]" << endl;
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

// Fungsi untuk menghapus node di awal linked list
void hapusDepan()
{
    cout << "\n [[Hapus Depan]]" << endl;
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

// Fungsi untuk menghapus node di akhir linked list
void hapusBelakang()
{
    cout << "\n [[Hapus Belakang]]" << endl;
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

// Fungsi untuk menghapus node di tengah linked list
void hapusTengah()
{
    cout << "\n [[Hapus Tengah]]" << endl;
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

// Fungsi untuk menghapus seluruh data dalam linked list
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

// Fungsi untuk menampilkan seluruh data dalam linked list
void tampilkanData()
{
    Node *temp = head;
    cout << "DATA MAHASISWA" << endl;
    cout << "[[ NAMA "
         << "  |  "
         << "NIM"
         << "\t ]]"
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
        cout << "\n[[PROGAM SINGLE LINKED LIST NON-CIRCULAR]]"
             << "\n"
             << endl;
        cout << "Tampilan Menu:" << endl;
        cout << "1. Tambah Depan" << endl;
        cout << "2. Tambah Belakang" << endl;
        cout << "3. Tambah Tengah" << endl;
        cout << "4. Ubah Depan" << endl;
        cout << "5. Ubah Belakang" << endl;
        cout << "6. Ubah Tengah" << endl;
        cout << "7. Hapus Depan" << endl;
        cout << "8. Hapus Belakang" << endl;
        cout << "9. Hapus Tengah" << endl;
        cout << "10. Hapus List" << endl;
        cout << "11. TAMPILKAN" << endl;
        cout << "0. KELUAR" << endl;
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

OUTPUT :

TAMPILAN MENU :
![Screenshot 2024-04-03 203400](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/f6998773-0467-440f-820a-434101d32536)

TAMPILAN OPERASI TAMBAH :

![Screenshot 2024-04-03 204930](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/2694a101-1c83-45da-a89f-4305c7ba6b92)
![Screenshot 2024-04-03 210041](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/f35713bd-a4ea-4402-9b48-317dcfdace5e)

TAMPILAN OPERASI HAPUS :

![Screenshot 2024-04-03 210145](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/354aecc3-9cdf-4835-8106-91f85e213169)
![Screenshot 2024-04-03 210244](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/d58d41b4-2039-441d-ac95-13702bf9dca5)

TAMPILAN OPERASI UBAH :

![Screenshot 2024-04-03 210316](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/ce1bde3d-d7e3-4050-9f5b-0c858e22ae57)
![Screenshot 2024-04-03 210335](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/91cb8aab-92cc-4049-bf56-baa37c7cd1f5)

TAMPILAN OPERASI TAMPIL DATA :

![Screenshot 2024-04-03 210355](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/8e1a7c07-688b-45d9-b746-28a40fdc7169)


NO 2. Setelah membuat menu tersebut, masukkan data sesuai urutan berikut, lalu 
tampilkan data yang telah dimasukkan. (Gunakan insert depan, belakang atau tengah)

![Screenshot 2024-04-03 212113](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/0f03266f-ce71-4b8b-902a-3fe24bb08f87)

NO 3. LAKUKAN PERINTAH BERIKUT 

a) tampilkan data berikut diantara farel dan denis

![Screenshot 2024-04-03 212330](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/05a4a38e-e5d8-4b1a-b948-c88bc0714283)

b) hapus data denis

![Screenshot 2024-04-03 212428](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/96eadd1c-02c7-40a1-9d98-225ecaa4d852)

c) tambah data berikut di awal

![Screenshot 2024-04-03 212509](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/72885d32-9c9e-4988-8176-6fa4c5006393)

d) tambah data berikut di akhir

![Screenshot 2024-04-03 212610](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/5e517e4f-89b0-44a4-b5a3-2f8bf338e8fe)

e) ubah data udin menjadi data berikut

![Screenshot 2024-04-03 213339](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/70a0a30a-47a5-4993-bd80-977568e22443)

f) ubah data terakhir menjadi berikut

![Screenshot 2024-04-03 213354](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/1c484c45-4d07-4197-bf2b-0d19f6fdcf73)

g) hapus data awal

![Screenshot 2024-04-03 213404](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/3d5e31e6-9b98-457c-a4f3-e221703c9747)

h) ubah data awal menjadi berikut

![Screenshot 2024-04-03 213421](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/05f7a5b8-58fc-4473-84c4-b1785c99a3d6)

i) hapus data akhir

![Screenshot 2024-04-03 213435](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/5d891a09-60a0-4104-8953-21686620ccf1)

j) tampilkan seluruh data

![Screenshot 2024-04-03 213453](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/5352fff0-53d6-497f-8bc4-4854e2c88b1b)


DESKRIPSI PROGRAM :

Program di atas merupakan implementasi dari struktur data linked list dalam bahasa pemrograman C++. Linked list adalah struktur data linear yang terdiri dari
serangkaian node yang setiap node-nya terdiri dari dua bagian, yaiti data dan alamat (pointer) yang menunjuk ke node berikutnya. Program ini 
memungkinkan pengguna untuk melakukan berbagai operasi pada linked list seperti menambah, mengubah, dan menghapus node.
Secara keseluruhan, program ini menyediakan implementasi dasar dari linked list tunggal dengan interaksi pengguna untuk mengelola list tersebut.

KESIMPULAN :

Linked List non circular adalah struktur data yang terdiri dari node denganpointer yang menunjuk ke node berikutnya, kecuali pada node terakhir yang
menunjuk ke nilai null sebagai penanda akhir dari linked list. Sedangkan Linkedlist circular adalah struktur data yang digunakan yang terdiri dari 
kumpulansimpul (node) yang terhubung dengan pointer yang saling terkait membentuk sirkuit. 

referensi :

[1] Anita Sindar RMS, ST., M.TI CV. AA. RIZKY, 28 Nov 2019 - 109 halam.

[2] Drozdek, A. (2005). Struktur data dan algoritma dalam C++. 

