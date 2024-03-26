Laporan Praktikum 
Modul 3 SINGLE DAN DOUBLE LINKED LIST
fajar farizqi azmi_2311102192_if-11-e

Dasar Teori
1. Linked List
Linked list banyak digunakan sebagai struktur data dasar dalam ilmukomputer. Ide dasarnya berkisar pada pengelompokan atau vertex yang disebutsimpul atau node. Simpul-simpul ini memiliki dua komponen utama: data
sebenarnya dan 'pointer' yang menghubungkannya dengan elemen atau nodeberikutnya dalam rangkaian matematisnya. Head mewakili langkah pertamasedangkan Tail menandakan langkah terakhir.
2. Single Linked List
Single linked list adalah struktur yang terdiri dari simpul-simpul yangdikelompokkan secara berurutan. Setiap simpul berisi dua elemen penting, yaitudata yang disimpan serta indikasi simpul mana yang mengikutinya. Pada
akhirnya, fitur ini membantu pengguna menambah atau menghapus informasiyang diperlukan tanpa mengganggu integritas keseluruhan dari dataset mereka.
3. Double Linked List
Struktur data double linked list memiliki ciri-ciri terdiri dari simpul-simpulyang terhubung secara berurutan dan dua arah. Setiap simpul dalam doublelinked list memiliki dua pointer, yaitu pointer ke simpul sebelumnya dan pointer
ke simpul berikutnya dalam urutan. Dengan fitur ini, pengguna dapatmelakukan operasi penambahan atau penghapusan simpul dengan lebih mudahdan fleksibel dibandingkan dengan single linked list. Namun, struktur data ini
memerlukan lebih banyak penggunaan memori karena menyimpan keduapointer tersebut.

GUIDED 1.

#include <iostream>

using namespace std;

///PROGRAM SINGLE LINKED LIST NON-CIRCULAR
//Deklarasi Struct Node
struct Node{
//komponen/member
int data;
 Node *next;
 };
 Node *head;
 Node *tail;
//Inisialisasi Node
void init(){
  head = NULL;
  tail = NULL;
    }
// Pengecekan
 bool isEmpty(){
   if (head == NULL)
 return true;
 else
  return false;
  }
//Tambah Depan
 void insertDepan(int nilai){
//Buat Node baru
  Node *baru = new Node;
  baru->data = nilai;
  baru->next = NULL;
 if (isEmpty() == true){
   head = tail = baru;
   tail->next = NULL;

 }
 else{
   baru->next = head;
   head = baru;
 }
   }
//Tambah Belakang
 void insertBelakang(int nilai){
//Buat Node baru
   Node *baru = new Node;
 baru->data = nilai;
 baru->next = NULL;
 if (isEmpty() == true){
    head = tail = baru;
    tail->next = NULL;
 }
 else{
   tail->next = baru;
   tail = baru;
 }
   }
//Hitung Jumlah List
 int hitungList(){
    Node *hitung;
    hitung = head;
    int jumlah = 0;
   while( hitung != NULL ){
     jumlah++;
      hitung = hitung->next; 
 }
 return jumlah;
   }
//Tambah Tengah
 void insertTengah(int data, int posisi){
   if( posisi < 1 || posisi > hitungList() ){
     cout << "Posisi diluar jangkauan" << endl;

 }
   else if( posisi == 1){
     cout << "Posisi bukan posisi tengah" <<

 endl; 
  }
else{
   Node *baru, *bantu;
   baru = new Node();
   baru->data = data;
// tranversing
 bantu = head;
 int nomor = 1;
   while( nomor < posisi - 1 ){
   bantu = bantu->next;
   nomor++;
  }
     baru->next = bantu->next;
     bantu->next = baru;
 }
    }
//Hapus Depan
 void hapusDepan() {
    Node *hapus;
  if (isEmpty() == false){
   if (head->next != NULL){
    hapus = head; 
    head = head->next;
     delete hapus;
  }
   else{
     head = tail = NULL;
 }
 }
  else{
    cout << "List kosong!" << endl;
 }
     }

//Hapus Belakang
 void hapusBelakang() {
     Node *hapus;
     Node *bantu;
     if (isEmpty() == false){
     if (head != tail){
     hapus = tail;
     bantu = head;
     while (bantu->next != tail){
     bantu = bantu->next;
 }
   tail = bantu;
   tail->next = NULL;
   delete hapus;
 }
  else{
   head = tail = NULL;
 }
     }
 else{
    cout << "List kosong!" << endl;
   }
 }
//Hapus Tengah
void hapusTengah(int posisi){
  Node *hapus, *bantu, *bantu2;
     if( posisi < 1 || posisi > hitungList() ){
      cout << "Posisi di luar jangkauan" << endl;
 }
  else if( posisi == 1){
    cout << "Posisi bukan posisi tengah" <<

 endl;
     }
  else{
   int nomor = 1;
     bantu = head;
     while( nomor <= posisi ){

  if( nomor == posisi-1 ){
   bantu2 = bantu;
 }
     if( nomor == posisi ){
      hapus = bantu;
 }
           bantu = bantu->next;
         nomor++;
 }
 bantu2->next = bantu;
  delete hapus;
      }
  }
//Ubah Depan
void ubahDepan(int data){
     if (isEmpty() == false){
     head->data = data;
 }
  else{
     cout << "List masih kosong!" << endl;
 }
      }
//Ubah Tengah
void ubahTengah(int data, int posisi){
      Node *bantu;
      if (isEmpty() == false){
       if( posisi < 1 || posisi > hitungList() ){
          cout << "Posisi di luar jangkauan" <<

 endl;
 }
         else if( posisi == 1){
          cout << "Posisi bukan posisi tengah" <<

endl;
 }
     else{
      bantu = head;
int nomor = 1;

    while (nomor < posisi){
  bantu = bantu->next;nomor++;
    }
        bantu->data = data;
  }
 }
       else{
        cout << "List masih kosong!" << endl;
    }
 }
//Ubah Belakang
void ubahBelakang(int data){
      if (isEmpty() == false){
        tail->data = data;
  }
          else{
           cout << "List masih kosong!" << endl;
    }
   }
//Hapus List
void clearList(){
     Node *bantu, *hapus;
     bantu = head;
     while (bantu != NULL){
     hapus = bantu;
     bantu = bantu->next;
     delete hapus;
 }  
     head = tail = NULL;
      cout << "List berhasil terhapus!" << endl;
  }
//Tampilkan List
void tampil(){
  Node *bantu;
  bantu = head;
  if (isEmpty() == false){

     while (bantu != NULL){
      cout << bantu->data << ends;
 bantu = bantu->next;
  }
    cout << endl;
 }
     else{
      cout << "List masih kosong!" << endl;
 }
  }
int main(){
 init();
 insertDepan(3);tampil();
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
 insertTengah(7,2);
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

 OUTPUT :
![Screenshot GUIDED 1. 2024-03-27 044014](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/7cbf9da4-c438-425e-afbc-95a28097f983)

 
GUIDED 2. 
#include <iostream>

using namespace std;

class Node {
  public:int data;
   Node* prev;
   Node* next;
 };
   class DoublyLinkedList {

 public:
  Node* head;
   Node* tail;
  DoublyLinkedList() {
 head = nullptr;
  tail = nullptr;

 }
   void push(int data) {
   Node* newNode = new Node;
   newNode->data = data;
   newNode->prev = nullptr;
   newNode->next = head;
 if (head != nullptr) {
  head->prev = newNode;
 }
  else {
   tail = newNode;
 }
   head = newNode;
  }
   void pop() {
 if (head == nullptr) {
  return;
 }
   Node* temp = head;
   head = head->next;
 if (head != nullptr) {
    head->prev = nullptr;
 }
 else {
  tail = nullptr;
 }
   delete temp;
 }
  bool update(int oldData, int newData) {
   Node* current = head;while (current != nullptr) {
 if (current->data == oldData) {
   current->data = newData;
 return true;
 }
  current = current->next;
   } 

 return false;
 }
   void deleteAll() {
     Node* current = head;
     while (current != nullptr) {
     Node* temp = current;
     current = current->next;
 delete temp;
 }
   head = nullptr;
 tail = nullptr;
 }
  void display() {
    Node* current = head;
    while (current != nullptr) {
     cout << current->data << " ";
     current = current->next;
 }
  cout << endl;
 }
   };
int main() {
  DoublyLinkedList list;
  while (true) {
   cout << "1. Add data" << endl;
   cout << "2. Delete data" << endl;
   cout << "3. Update data" << endl;
   cout << "4. Clear data" << endl;
   cout << "5. Display data" << endl;
   cout << "6. Exit" << endl;int choice;
   cout << "Enter your choice: ";
   cin >> choice;
  switch (choice) {
 case 1: {
 int data;
   cout << "Enter data to add: ";
    cin >> data;
  list.push(data);
 break;
    }
 case 2: {
  list.pop();
  break;
 }
 case 3: {
 int oldData, newData;
      cout << "Enter old data: ";
      cin >> oldData;
      cout << "Enter new data: ";
      cin >> newData;
      bool updated = list.update(oldData,

 newData); 

 if (!updated) {
   cout << "Data not found" << endl;
 }
  break; 

 }
  case 4: {
   list.deleteAll();
   break;
 }
  case 5: {
   list.display();
   break;
   }
  case 6: {
 return 0;
  }
   default: {
    cout << "Invalid choice" << endl;
 break;
 }
  }
 }
  return 0;
 }

OUTPUT :
![Screenshot GUIDED 2. 2024-03-27 044358](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/21ff4f82-c5e9-4a82-8adb-4960ec1fc494)

#UNGUIDED
UNGUIDED 1. 
#include <iostream>
//fajar farizqi azmi//2311102192//if-11-e
using namespace std;

  class Node
 {
 public:
  string name;
  int age;
  Node *next;
};
class LinkedList
{
public:
 Node *head;
 LinkedList()
{
   head = NULL;
}
void insertAtFront(string name, int age)
 {
  Node *newNode = new Node();
  newNode->name = name;
  newNode->age = age;
  newNode->next = head;
  head = newNode;
 }
void insertAtEnd(string name, int age)
 {
  Node *newNode = new Node();
  newNode->name = name;
  newNode->age = age;
  newNode->next = NULL;
   if (head == NULL)
  {
  head = newNode;
  return;
   }
    Node *temp = head;
    while (temp->next != NULL)
 {
 temp = temp->next;
 }
 temp->next = newNode;
}
void insertAfter(string name, int age, string keyName){
   Node *temp = head;
   while (temp != NULL)
{
   if (temp->name == keyName)
{
    Node *newNode = new Node();
    newNode->name = name;
    newNode->age = age;
    newNode->next = temp->next;
    temp->next = newNode;
return;
  }
    temp = temp->next;
 }
   cout << keyName << " not found in the list." << endl;
}
void updateNode(string name, int age)
{
Node *temp = head;
 while (temp != NULL)
{
  if (temp->name == name)
{
    temp->age = age;
    return;
}
  temp = temp->next;
  }
       cout << name << " not found in the list." << endl;
}
void deleteNode(string name)
{
 Node *temp = head;
 Node *prev = NULL;
 while (temp != NULL)
{
  if (temp->name == name)
{
  if (prev == NULL)
{
  head = temp->next;
}
else
{
   prev->next = temp->next;
}
delete temp;
return;
 }
 prev = temp;
 temp = temp->next;
 }
    cout << name << " not found in the list." << endl;
 }
void clearAll()
  {
   Node *temp = head;
   while (temp != NULL)
  {
      Node *next = temp->next;
      delete temp;
      temp = next;
    }
      head = NULL;
 }

 void display()
 {
   Node *temp = head;
   while (temp != NULL)
{
      cout << "Name: " << temp->name << ", Age: " <<
 temp->age << endl;
        temp = temp->next;
      }
  }
};

int main()
{
  LinkedList list;
  int choice;
  string name, keyName;
  int age;
  do
 {
  cout << endl;
  cout << "MENU" << endl;
  cout << "1. Add data" << endl;
  cout << "2. Update data" << endl;
  cout << "3. Delete data" << endl;
  cout << "4. Clear data" << endl;
  cout << "5. Display data" << endl;
  cout << "6. Exit" << endl;
  cout << "Enter your choice: ";
  cin >> choice;
  switch (choice)
 {
 case 1:
    cout << "Enter name: ";
   cin >> name;
   cout << "Enter age: ";
   cin >> age;
   list.insertAtFront(name, age);
   break;
 case 2:
   cout << "Enter name to update: ";
   cin >> name;
   cout << "Enter new age: ";
   cin >> age;
   list.updateNode(name, age);
   break;
 case 3:
  cout << "Enter name to delete: ";
  cin >> name;
    list.deleteNode(name);
  break;
 case 4:
  list.clearAll();
  break;
  case 5:
  list.display();
  break;
 case 6:
      cout << "Exiting program..." << endl;
  break;
 default:
    cout << "Invalid choice." << endl;
 }
} while (choice != 6);
 return 0;
 }
 OUTPUT :
![Screenshot 2024-03-27 035220](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/0f1df417-2376-4b9d-9fbd-e5480c1ab863)
![Screenshot 2024-03-27 035248](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/af94fadd-183c-4dae-9f90-e2f672e172b4)
![Screenshot 2024-03-27 035338](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/eea29196-d7f3-46a9-845f-6fcd07596ed0)

UNGUIDED 2.
#include <iostream>
//fajar farizqi azmi//2311102192//if-11-e
#include <string>
using namespace std;
struct Node
{
string nama;
int harga;
 Node *prev;
 Node *next;
 };
  class DoubleLinkedList
  {
 private:
  Node *head;
  Node *tail;
 int size;
   public:DoubleLinkedList()
 {
  head = NULL;
  tail = NULL;
  size = 0;
 }
 void addData(string nama, int harga)
  {
    Node *node = new Node;
    node->nama = nama;
    node->harga = harga;
    node->prev = tail;
    node->next = NULL;
 if (head == NULL)
 {
   head = node;
   tail = node;
 }
 else
  {
  tail->next = node;
  tail = node;
 }
  size++;
 }
  void addDataAt(int index, string nama, int harga)
 {
  if (index < 0 || index > size)
 {
     cout << "Index out of bounds" << endl;
 return;
 }
   Node *node = new Node;
    node->nama = nama;
     node->harga = harga;
 if (index == 0)
 {
  node->prev = NULL;
  node->next = head;
  head->prev = node;
  head = node;
 }
   else if (index == size)
 {
  node->prev = tail;
  node->next = NULL;
  tail->next = node;
  tail = node;
 }
 else
 {
   Node *current = head;for (int i = 0; i < index - 1; i++)
 {
   current = current->next;
 }
  node->prev = current;
  node->next = current->next;
  current->next->prev = node;
  current->next = node;
 }
   size++;
 }
   void deleteDataAt(int index)
   {
  if (index < 0 || index >= size)
 {
     cout << "Index out of bounds" << endl; 
 return;
 }
  if (index == 0)
 {
   Node *temp = head;
   head = head->next;
   head->prev = NULL;
   delete temp;
 }
    else if (index == size - 1)
 {
      Node *temp = tail;
        tail = tail->prev;
      tail->next = NULL;
    delete temp;
 }
  else
 {
   Node *current = head; 
    for (int i = 0; i < index; i++)
 {
  current = current->next;
 }
   current->prev->next = current->next;
    current->next->prev = current->prev;
 delete current;
 }
  size--;
 }
   void clearData()
 {
 while (head != NULL)
 {
   Node *temp = head;
   head = head->next;
   delete temp;}
   tail = NULL;
 size = 0;
 }
    void displayData()
 {
      cout << "Nama Produk\tHarga" << endl;
    Node *current = head;
 while (current != NULL)
 {
       cout << current->nama << "\t\t" << current->harga
 << endl;
   current = current->next;
   }
  }
   void updateDataAt(int index, string nama, int harga)
 {
    if (index < 0 || index >= size)
 {
      cout << "Index out of bounds" << endl;
 return;
 }
  Node *current = head;
   for (int i = 0; i < index; i++)
 {
   current = current->next;
 }
    current->nama = nama;
    current->harga = harga;
 }
  };
int main()
{
   DoubleLinkedList dll;
    int choice;
    string nama;
    int harga;
    int index;
     do
 {
   cout << "Menu:" << endl;
   cout << "1. Tambah Data" << endl;
   cout << "2. Hapus Data" << endl;
   cout << "3. Update Data" << endl;
   cout << "4. Tambah Data pada Urutan Tertentu" <<
 endl;
   cout << "5. Hapus Data pada Urutan Tertentu" << endl;
   cout << "6. Hapus Semua Data" << endl;
   cout << "7. Tampilkan Data" << endl;
   cout << "8. Keluar" << endl;cout << "Pilih: ";
    cin >> choice;
 switch (choice)
 {
  case 1:
   cout << "Nama Produk: ";
  cin >> nama;
   cout << "Harga: ";
  cin >> harga;
     dll.addData(nama, harga);
 break;
 case 2:
   cout << "Index: ";
   cin >> index;
   dll.deleteDataAt(index);
   break;
 case 3:
     cout << "Index: ";
     cin >> index;
     cout << "Nama Produk: ";
     cin >> nama;
     cout << "Harga: ";
     cin >> harga;
     dll.updateDataAt(index, nama, harga);
  break;
 case 4:
    cout << "Index: ";
    cin >> index;
      cout << "Nama Produk: ";
      cin >> nama;
       cout << "Harga: ";
     cin >> harga;
     dll.addDataAt(index, nama, harga);
  break;
 case 5:
   cout << "Index: ";
   cin >> index;
   dll.deleteDataAt(index);
   break;
 case 6:
     dll.clearData();
  break;
 case 7: 
   dll.displayData();
  break;
 case 8:
   break;
 default:
      cout << "Pilihan tidak valid" << endl;
  break;
 }
    cout << endl;
  } while (choice != 8);
 return 0;
 }
Output:
![Screenshot 2024-03-27 040818](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/8e364acf-43c2-482d-bb8f-2a46340d56c9)
![Screenshot 2024-03-27 040835](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/2cf59dc7-151a-4219-9da8-27dc2ff6a01e)
![Screenshot 2024-03-27 040905](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/6851a53a-32b1-4944-ab4e-bdb7ba98edcb)
![Screenshot 2024-03-27 040957](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/e0c57992-c651-46ea-9fd1-6ed860709d2b)
![Screenshot 2024-03-27 041021](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/28c6b1fc-cf6a-4b6f-aae8-34e7fb3b4acc)


#KESIMPULAN

Dibandingkan dengan single linked list yang hanya memiliki satu pointer untukmenghubungkan node secara berurutan, double linked list memiliki dua pointeryang menghubungkan node secara berurutan dan dua arah. Meskipun fitur
tambahan ini memungkinkan lebih fleksibilitas saat menjalankan operasi sepertimenambah atau menghapus node dengan mudah, ini juga memerlukan memoritambahan untuk menyimpan kedua pointer tersebut.

REFERENSI
Data Structures and Algorithms in C++" oleh Adam Drozdek.......
