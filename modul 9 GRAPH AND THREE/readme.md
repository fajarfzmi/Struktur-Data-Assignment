# <h1 align="center">LAPORAN PRAKTIKUM MODUL 9 GRAPH AND THREE</h1>
<p align="center">FAJAR FARIZQI AZMI_2311102192_IF-11-E</p>




  ## Dasar Teori 

## 1. GRAF

Graf atau graph adalah struktur data yang digunakan untuk merepresentasikan hubungan antara objek dalam bentuk node atau vertex dan sambungan antara node tersebut dalam bentuk 
edge atau edge. Graf terdiri dari simpul dan busur yang secara matematis dinyatakan sebagai :
G = (V, E)
Dimana G adalah Graph, V adalah simpul atau vertex dan node sebagai titik atau egde dan digambarkan seperti berikut:




Graph juga dapat digunakan dalam berbagai bidang lainnya, seperti analisis jaringan untuk mempelajari pola koneksi dalam sistem kompleks, analisis peringkat dalam mesin pencari untuk menentukan relevansi dan otoritas halaman web. Dengan kemampuannya yang serbaguna, Graph menjadi alat yang sangat berharga dalam memahami dan menganalisis hubungan serta pola yang ada dalam berbagai konteks.


## a.	Jenis-jenis Graph
Graph memiliki berbagai jenis yang umumnya sering digunakan, antara lain:
 




1)	Graph berarah (directed graph): Urutan simpul mempunyai arti. Misal busur AB adalah e1 sedangkan busur BA adalah e8.








2)	Graph tak berarah (undirected graph): Urutan simpul dalam sebuah busur t idak diperhatikan. Misal busur e1 dapat disebut busur AB atau BA.
 
3)	Weigth Graph : Graph yang mempunyai nilai pada tiap edgenya.


## b.	Representasi Graph dengan Matriks
 

 
Gambar Representasi Graph dengan Matriks


Representasi Graph dengan matriks, dikenal sebagai Matriks Adjasi, menggunakan matriks dua dimensi. Representasi Graph menggunakan matriks memiliki kelebihan akses efisien, penghitungan derajat simpul yang cepat, dan kesederhanaan. Namun, kekurangannya adalah penggunaan ruang yang besar, batasan skalabilitas, dan ketidakefisienan untuk Graph yang jarang terhubung. Representasi ini cocok untuk Graph kecil dengan hubungan yang padat, tetapi mungkin tidak efisien untuk Graph besar atau jarang terhubung.


## c.	Representasi Graph dengan Linked List



Dalam membuat representasi Graph dalam bentuk linked list, penting untuk memperhatikan perbedaan antara simpul vertex dan simpul edge. Simpul vertex merujuk pada simpul atau vertex dalam Graph, sedangkan simpul edge merujuk pada busur atau hubungan antar simbol. Meskipun struktur keduanya bisa sama atau berbeda tergantung pada kebutuhan, umumnya disamakan. Akan tetapi, perbedaan
 

antara simpul vertex dan simpul edge terletak pada asumsi dan fungsi yang melekat pada masing-masing simpul.



Gambar Representasi Graph dengan Linked List
## 2.	Tree atau Pohon
Dalam ilmu komputer, pohon merupakan struktur data yang umum dan kuat yang menyerupai pohon dalam kehidupan nyata. Struktur pohon terdiri dari kumpulan node yang saling terhubung, di mana setiap node memiliki paling banyak satu simpul induk dan nol atau lebih simpul anak dengan urutan tertentu. Struktur data pohon digunakan untuk menyimpan data secara hierarkis, seperti pohon keluarga, skema pertandingan, dan struktur organisasi. Istilah-istilah yang terkait dengan struktur data pohon meliputi:
 
 

Binary Tree atau pohon biner merupakan struktur data pohon akan tetapi setiap simpul dalam pohon diprasyaratkan memiliki simpul satu level di bawahnya (child) tidak lebih dari 2 simpul, artinya jumlah child yang diperbolehkan yakni 0, 1, dan 2.

Gambar Struktur Data Binary Tree


Untuk membuat struktur data binary tree dalam suatu program (berbahasa C++) dapat menggunakan struct yang memiliki 2 buah pointer, seperti halnya double linked list.

Operasi pada Tree
a.	Create: digunakan untuk membentuk binary tree baru yang masih kosong.
b.	Clear: digunakan untuk mengosongkan binary tree yang sudah ada atau menghapus semua node pada binary tree.
c.	isEmpty: digunakan untuk memeriksa apakah binary tree masih kosong atau tidak.
d.	Insert: digunakan untuk memasukkan sebuah node kedalam tree.
e.	Find: digunakan untuk mencari root, parent, left child, atau right child dari suatu node dengan syarat tree tidak boleh kosong.
f.	Update: digunakan untuk mengubah isi dari node yang ditunjuk oleh pointer current dengan syarat tree tidak boleh kosong.
 

g.	Retrive: digunakan untuk mengetahui isi dari node yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.
h.	Delete Sub: digunakan untuk menghapus sebuah subtree (node beserta seluruh descendant-nya) yang ditunjuk pointer current dengan syarat tree tidak boleh kosong.
i.	Characteristic: digunakan untuk mengetahui karakteristik dari suatu tree. Yakni size, height, serta average lenght-nya.
j.	Traverse: digunakan untuk mengunjungi seluruh node-node pada tree dengan cara traversal. Terdapat 3 metode traversal yang dibahas dalam modul ini yakni Pre-Order, In-Order, dan Post-Order.


## Alur Pre-Order

 1.  Pre-Order
Penelusuran secara pre-order memiliki alur:
a. Cetak data pada simpul root
b. Secara rekursif mencetak seluruh data pada subpohon kiri
c. Secara rekursif mencetak seluruh data pada subpohon kanan
Dapat kita turunkan rumus penelusuran menjadi:

 

2.	In-Order
Penelusuran secara in-order memiliki alur:
a.	Secara rekursif mencetak seluruh data pada subpohon kiri
b.	Cetak data pada root
c.	Secara rekursif mencetak seluruh data pada subpohon kanan Dapat kita turunkan rumus penelusuran menjadi:

 

3.	Post-Order
Penelusuran secara in-order memiliki alur:
a.	Secara rekursif mencetak seluruh data pada subpohon kiri
b.	Secara rekursif mencetak seluruh data pada subpohon kanan
c.	Cetak data pada root
Dapat kita turunkan rumus penelusuran menjadi:





  

## [GUIDED]  

## Guided 1
 
```C++
#include <iostream>
#include <iomanip>
using namespace std;

string simpul[7] = {
    "Ciamis",
    "Bandung",
    "Bekasi",
    "tasikmalaya",
    "Cianjur",
    "Purwokerto",
    "Yogyakarta"};
int busur[7][7] = {
    {0, 7, 8, 0, 0, 0, 0},
    {0, 0, 5, 0, 0, 15, 0},
    {0, 6, 0, 0, 5, 0, 0},
    {0, 5, 0, 0, 2, 4, 0},
    {23, 0, 0, 10, 0, 0, 8},
    {0, 0, 0, 0, 7, 0, 3},
    {0, 0, 0, 0, 9, 4, 0}};



    void tampilGraph()
{
    for (int baris = 0; baris < 7; baris++)
    {
        cout << " " << setiosflags(ios::left) << setw(15)
             << simpul[baris] << " : ";
        for (int kolom = 0; kolom < 7; kolom++)
        {
            if (busur[baris][kolom] != 0)
            {
                cout << " " << simpul[kolom] << "(" << busur[baris][kolom]

                     << ")";
            }
        }
        cout << endl;
    }
}
int main()
{
    tampilGraph();
    return 0;
}
```
## output :

![Screenshot 2024-05-29 222507](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/e59dc81c-8e3a-4908-b261-daf7e2311433)


## DESKRIPSI PEOGRAM : 

Program tersebut adalah implementasi representasi graph menggunakan matriks
ketetanggaan yang terdiri dari 7 simpul.


## Guided 2

```C++
#include <iostream>
using namespace std;
// PROGRAM BINARY TREE
// Deklarasi Pohon
struct Pohon
{
    char data;
    Pohon *left, *right, *parent; // pointer
};
// pointer global
Pohon *root;
// Inisialisasi
void init()
{
    root = NULL;
}
bool isEmpty()
{
    return root == NULL;
}
Pohon *newPohon(char data)
{
    Pohon *node = new Pohon();
    node->data = data;
    node->left = NULL;

   
            node->right = NULL;
    node->parent = NULL;
    return node;
}
void buatNode(char data)
{
    if (isEmpty())
    {
        root = newPohon(data);
        cout << "\nNode " << data << " berhasil dibuat menjadi root." << endl;
    }
    else
    {
        cout << "\nPohon sudah dibuat" << endl;
    }
}
Pohon *insertLeft(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->left != NULL)
        {
            cout << "\nNode " << node->data << " sudah ada child kiri!"

                 << endl;

            return NULL;
        }
        else
        {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->left = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;

                
                return baru;
        }
    }
}
Pohon *insertRight(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->right != NULL)
        {
            cout << "\nNode " << node->data << " sudah ada child kanan!"

                 << endl;

            return NULL;
        }
        else
        {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->right = baru;
            cout << "\nNode " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;

                
                return baru;
        }
    }
}
void update(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ingin diganti tidak ada!!" << endl;
        else
        {
            char temp = node->data;
            node->data = data;
            cout << "\nNode " << temp << " berhasil diubah menjadi " <<

                data << endl;
        }
    }
}
void retrieve(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\nData node : " << node->data << endl;
        }
    }
}
void find(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\nData Node : " << node->data << endl;
            cout << "Root : " << root->data << endl;
            if (!node->parent)
                cout << "Parent : (tidak punya parent)" << endl;
            else
                cout << "Parent : " << node->parent->data << endl;
            if (node->parent != NULL && node->parent->left != node &&

                node->parent->right == node)

                cout << "Sibling : " << node->parent->left->data << endl;

          

                else if (node->parent != NULL && node->parent->right != node

                         && node->parent->left == node)

                    cout
                << "Sibling : " << node->parent->right->data <<

                endl;

            else cout << "Sibling : (tidak punya sibling)" << endl;
            if (!node->left)
                cout << "Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << "Child Kiri : " << node->left->data << endl;
            if (!node->right)
                cout << "Child Kanan : (tidak punya Child kanan)" <<

                    endl;

            else
                cout << "Child Kanan : " << node->right->data << endl;
        }
    }
}
// Penelusuran (Traversal)
// preOrder
void preOrder(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            cout << " " << node->data << ", ";
            preOrder(node->left);
            preOrder(node->right);
        }
    }
}
// inOrder
void inOrder(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            inOrder(node->left);
            cout << " " << node->data << ", ";
            inOrder(node->right);
        }
    }
}
// postOrder
void postOrder(Pohon *node)
{

   

        if (isEmpty())
            cout
        << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            postOrder(node->left);
            postOrder(node->right);
            cout << " " << node->data << ", ";
        }
    }
}
// Hapus Node Tree
void deleteTree(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        if (node != NULL)
        {
            if (node != root)
            {
                if (node->parent->left == node)
                    node->parent->left = NULL;
                else if (node->parent->right == node)
                    node->parent->right = NULL;
            }
            deleteTree(node->left);
            deleteTree(node->right);
            if (node == root)
            {
                delete root;
                root = NULL;
            }
            else
            {
                delete node;
            }
        }
    }
}
// Hapus SubTree
void deleteSub(Pohon *node)
{
    if (isEmpty())
        cout << "\nBuat tree terlebih dahulu!" << endl;
    else
    {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\nNode subtree " << node->data << " berhasil dihapus."
             << endl;
    }
}
// Hapus Tree
void clear()
{


        if (isEmpty())
            cout
        << "\nBuat tree terlebih dahulu!!" << endl;
    else
    {
        deleteTree(root);
        cout << "\nPohon berhasil dihapus." << endl;
    }
}
// Cek Size Tree
int size(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            return 1 + size(node->left) + size(node->right);
        }
    }
}
// Cek Height Level Tree
int height(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nBuat tree terlebih dahulu!" << endl;
        return 0;
    }
    else
    {
        if (!node)
        {
            return 0;
        }
        else
        {
            int heightKiri = height(node->left);
            int heightKanan = height(node->right);
            if (heightKiri >= heightKanan)
            {
                return heightKiri + 1;
            }
            else
            {
                return heightKanan + 1;
            }
        }
    }
}
// Karakteristik Tree
void characteristic()
{
    int s = size(root);
    int h = height(root);
    cout << "\nSize Tree : " << s << endl;
    cout << "Height Tree : " << h << endl;
    if (h != 0)

       

                    cout
            << "Average Node of Tree : " << s / h << endl;
    else
        cout << "Average Node of Tree : 0" << endl;
}
int main()
{
    init();
    buatNode('A');
    Pohon *nodeB, *nodeC, *nodeD, *nodeE, *nodeF, *nodeG, *nodeH, *nodeI,
        *nodeJ;
    nodeB = insertLeft('B', root);
    nodeC = insertRight('C', root);
    nodeD = insertLeft('D', nodeB);
    nodeE = insertRight('E', nodeB);
    nodeF = insertLeft('F', nodeC);
    nodeG = insertLeft('G', nodeE);
    nodeH = insertRight('H', nodeE);
    nodeI = insertLeft('I', nodeG);
    nodeJ = insertRight('J', nodeG);
    update('Z', nodeC);
    update('C', nodeC);
    retrieve(nodeC);
    find(nodeC);
    cout << "\nPreOrder :" << endl;
    preOrder(root);
    cout << "\n"
         << endl;
    cout << "InOrder :" << endl;
    inOrder(root);
    cout << "\n"
         << endl;
    cout << "PostOrder :" << endl;
    postOrder(root);
    cout << "\n"
         << endl;
    characteristic();
    deleteSub(nodeE);
    cout << "\nPreOrder :" << endl;
    preOrder(root);
    cout << "\n"
         << endl;
    characteristic();
}
```
## Output :

![Screenshot 2024-05-29 222807](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/451d45ce-a500-40c4-b476-11c626526c4a)



## Deskripsi program :

Program tersebut adalah implementasi dari pohon biner, program ini
memungkinkan pembuatan, pemodifikasi, dan penelusuran pohon biner.


## [UNGUIDED]

## UNGUIDED 1

```C++
// fajar farizqi azmi
// 2311102192
// IF-11-E

#include <iostream>
#include <vector>
#include <map>
using namespace std;

typedef map<string, int> DistanceMap;
typedef map<string, DistanceMap> Graph;

void addEdge(Graph &graph, const string &source, const string &destination, int distance)
{
    graph[source][destination] = distance;
}
void printGraph(const Graph &graph)
{
    cout << " ";
    for (const auto &pair : graph)
    {
        cout << pair.first << " " ;
    }
    cout << endl;
    for (const auto &pair : graph)
    {
        cout << pair.first;
        cout.width(20  - pair.first.length());
        cout << "       ";
        for (const auto &innerPair : pair.second)
        {
            cout << innerPair.second;
            cout.width(4 );
        }
        cout << endl;
    }
}
int main()
{
    int numNodes_2311102192;
    cout << "Silahkan masukkan jumlah simpul: ";
    cin >> numNodes_2311102192;
    vector<string> nodes(numNodes_2311102192);
    cout << "Silahkan masukkan nama simpul:\n";
    for (int i = 0; i < numNodes_2311102192; ++i)
    {
        cout << "Simpul " << i + 1 << ": ";
        cin >> nodes[i];
    }
    Graph graph;
    cout << "Silahkan masukkan bobot antar simpul\n";
    for (int i = 0; i < numNodes_2311102192; ++i)
    {
        for (int j = 0; j < numNodes_2311102192; ++j)
        {
            string source = nodes[i];
            string destination = nodes[j];
            int distance;
            cout << source << " => " << destination << " = ";
                                                        
               cin >> distance;
            addEdge(graph, source, destination, distance);
        }
    }
    printGraph(graph);
    return 0;
}

```

## Screnshoot OUTPUT :

![Screenshot 2024-05-29 223912](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/7b7fe913-5a4c-47ba-8874-65b7bc6656c0)


## DESKRIPSI PROGRAM :

Program ini membantu pengguna dalam membuat dan memvisualisasikan graf berbobot dengan menggunakan matriks ketetanggaan. Program ini juga memberikan output yang terformat dengan rapi untuk memudahkan pengguna memahami struktur graf yang diinputkan.

## UNGUIDED 2

```C++
// fajar farizqi azmi
// 2311102192
// IF-11-E

#include <iostream>
using namespace std;

// PROGRAM BINARY TREE
struct Pohon
{
    char data;
    Pohon *left, *right, *parent; // pointer
};

// pointer global
Pohon *root;

// Inisialisasi
void init()
{
    root = NULL;
}

bool isEmpty()
{
    return root == NULL;
}

Pohon *newPohon(char data)
{
    Pohon *node = new Pohon();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->parent = NULL;
    return node;
}

void buatNode(char data)
{
    if (isEmpty())
    {
        root = newPohon(data);
        cout << "\nSELAMAT YAH, Node " << data << " berhasil dibuat menjadi root." << endl;
    }
    else
    {
        cout << "\nPohon sudah dibuat" << endl;
    }
}

Pohon *insertLeft(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nPliss! Buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->left != NULL)
        {
            cout << "\nUyy Node " << node->data << " sudah ada child kiri!" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->left = baru;
            cout << "\nGOKIL!! Node " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
            return baru;
        }
    }
}

Pohon *insertRight(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nOyyy!! buat tree terlebih dahulu!" << endl;
        return NULL;
    }
    else
    {
        if (node->right != NULL)
        {
            cout << "\nUyy Node " << node->data << " sudah ada child kanan!" << endl;
            return NULL;
        }
        else
        {
            Pohon *baru = newPohon(data);
            baru->parent = node;
            node->right = baru;
            cout << "\nSELAMAT YAH!! Node " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
            return baru;
        }
    }
}

void update(char data, Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nOyy!! buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ingin diganti tidak ada!!" << endl;
        else
        {
            char temp = node->data;
            node->data = data;
            cout << "\nSELAMAT YAH!! Node " << temp << " berhasil diubah menjadi " << data << endl;
        }
    }
}

void retrieve(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nOyy!! Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\nData node : " << node->data << endl;
        }
    }
}

void find(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nOyy!! Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        else
        {
            cout << "\nData Node : " << node->data << endl;
            cout << "Root : " << root->data << endl;
            if (!node->parent)
                cout << "Parent : (tidak punya parent)" << endl;
            else
                cout << "Parent : " << node->parent->data << endl;
            if (node->parent != NULL && node->parent->left != node && node->parent->right == node)
                cout << "Sibling : " << node->parent->left->data << endl;
            else if (node->parent != NULL && node->parent->right != node && node->parent->left == node)
                cout << "Sibling : " << node->parent->right->data << endl;
            else
                cout << "Sibling : (tidak punya sibling)" << endl;
            if (!node->left)
                cout << "Child Kiri : (tidak punya Child kiri)" << endl;
            else
                cout << "Child Kiri : " << node->left->data << endl;
            if (!node->right)
                cout << "Child Kanan : (tidak punya Child kanan)" << endl;
            else
                cout << "Child Kanan : " << node->right->data << endl;
        }
    }
}

void showChild(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nOyy!! Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\nNode " << node->data << " Child: " << endl;
            if (node->left)
                cout << "Child Kiri : " << node->left->data << endl;
            else
                cout << "Child Kiri : (tidak punya Child kiri)" << endl;
            if (node->right)
                cout << "Child Kanan : " << node->right->data << endl;
            else
                cout << "Child Kanan : (tidak punya Child kanan)" << endl;
        }
    }
}

// Penelusuran..
// preOrder
void preOrder(Pohon *node)
{
    if (node != NULL)
    {
        cout << " " << node->data << ", ";
        preOrder(node->left);
        preOrder(node->right);
    }
}

void showDescendants(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nOyy!! Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        if (!node)
        {
            cout << "\nNode yang ditunjuk tidak ada!" << endl;
        }
        else
        {
            cout << "\nDescendants of node " << node->data << " : ";
            preOrder(node);
            cout << endl;
        }
    }
}

// Penelusuran (Traversal)
// inOrder
void inOrder(Pohon *node)
{
    if (node != NULL)
    {
        inOrder(node->left);
        cout << " " << node->data << ", ";
        inOrder(node->right);
    }
}

// postOrder
void postOrder(Pohon *node)
{
    if (node != NULL)
    {
        postOrder(node->left);
        postOrder(node->right);
        cout << " " << node->data << ", ";
    }
}

// Hapus Node Tree
void deleteTree(Pohon *node)
{
    if (node != NULL)
    {
        if (node != root)
        {
            if (node->parent->left == node)
                node->parent->left = NULL;
            else if (node->parent->right == node)
                node->parent->right = NULL;
        }
        deleteTree(node->left);
        deleteTree(node->right);
        if (node == root)
        {
            delete root;
            root = NULL;
        }
        else
        {
            delete node;
        }
    }
}

// Hapus SubTree
void deleteSub(Pohon *node)
{
    if (isEmpty())
    {
        cout << "\nOyy!! Buat tree terlebih dahulu!" << endl;
    }
    else
    {
        deleteTree(node->left);
        deleteTree(node->right);
        cout << "\nSELAMAT YAH!! Node subtree " << node->data << " berhasil dihapus." << endl;
    }
}

// Hapus Tree
void clear()
{
    if (isEmpty())
    {
        cout << "\nOyy!! Buat tree terlebih dahulu!!" << endl;
    }
    else
    {
        deleteTree(root);
        cout << "\nSELAMAT YAH!! Pohon berhasil dihapus." << endl;
    }
}

// Cek Size Tree
int size(Pohon *node)
{
    if (!node)
    {
        return 0;
    }
    else
    {
        return 1 + size(node->left) + size(node->right);
    }
}

// Cek Height Level Tree
int height(Pohon *node)
{
    if (!node)
    {
        return 0;
    }
    else
    {
        int heightKiri = height(node->left);
        int heightKanan = height(node->right);
        if (heightKiri >= heightKanan)
        {
            return heightKiri + 1;
        }
        else
        {
            return heightKanan + 1;
        }
    }
}

// Karakteristik Tree
void characteristic()
{
    int s = size(root);
    int h = height(root);
    cout << "\nSize Tree : " << s << endl;
    cout << "Height Tree : " << h << endl;
    if (h != 0)
        cout << "Average Node of Tree : " << s / h << endl;
    else
        cout << "Average Node of Tree : 0" << endl;
}

int main()
{
    int choice;
    char fajar_2311102192 , parentData, direction;
    Pohon *parentNode, *tempNode;

    do
    {
        cout << "\n[[[======Selamat Datang di Node Pohon=====]]]\n";
        cout << "1. Buat Node Root\n";
        cout << "2. Tambah Node Kiri\n";
        cout << "3. Tambah Node Kanan\n";
        cout << "4. Update Node\n";
        cout << "5. Retrieve Node\n";
        cout << "6. Find Node\n";
        cout << "7. Show Child\n";
        cout << "8. Show Descendants\n";
        cout << "9. PreOrder Traversal\n";
        cout << "10. InOrder Traversal\n";
        cout << "11. PostOrder Traversal\n";
        cout << "12. Show Characteristics\n";
        cout << "13. Clear Tree\n";
        cout << "14. Exit\n";
        cout << "Pilih menu: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Masukkan data root: ";
            cin >> fajar_2311102192;
            buatNode(fajar_2311102192);
            break;
        case 2:
            cout << "Masukkan data parent: ";
            cin >> parentData;
            cout << "Masukkan data node kiri: ";
            cin >> fajar_2311102192;
            parentNode = root;
            while (parentNode && parentNode->data != parentData)
            {
                if (parentNode->left && parentNode->left->data == parentData)
                    parentNode = parentNode->left;
                else if (parentNode->right && parentNode->right->data == parentData)
                    parentNode = parentNode->right;
                else if (parentNode->left)
                    parentNode = parentNode->left;
                else if (parentNode->right)
                    parentNode = parentNode->right;
                else
                    parentNode = NULL;
            }
            if (parentNode)
            {
                insertLeft(fajar_2311102192, parentNode);
            }
            else
            {
                cout << "Parent tidak ditemukan!" << endl;
            }
            break;
        case 3:
            cout << "Masukkan data parent: ";
            cin >> parentData;
            cout << "Masukkan data node kanan: ";
            cin >> fajar_2311102192;
            parentNode = root;
            while (parentNode && parentNode->data != parentData)
            {
                if (parentNode->left && parentNode->left->data == parentData)
                    parentNode = parentNode->left;
                else if (parentNode->right && parentNode->right->data == parentData)
                    parentNode = parentNode->right;
                else if (parentNode->left)
                    parentNode = parentNode->left;
                else if (parentNode->right)
                    parentNode = parentNode->right;
                else
                    parentNode = NULL;
            }
            if (parentNode)
            {
                insertRight(fajar_2311102192, parentNode);
            }
            else
            {
                cout << "Parent tidak ditemukan!" << endl;
            }
            break;
        case 4:
            cout << "Masukkan data node yang ingin diupdate: ";
            cin >> parentData;
            cout << "Masukkan data baru: ";
            cin >>fajar_2311102192;
            tempNode = root;
            while (tempNode && tempNode->data != parentData)
            {
                if (tempNode->left && tempNode->left->data == parentData)
                    tempNode = tempNode->left;
                else if (tempNode->right && tempNode->right->data == parentData)
                    tempNode = tempNode->right;
                else if (tempNode->left)
                    tempNode = tempNode->left;
                else if (tempNode->right)
                    tempNode = tempNode->right;
                else
                    tempNode = NULL;
            }
            if (tempNode)
            {
                update(fajar_2311102192, tempNode);
            }
            else
            {
                cout << "Node tidak ditemukan!" << endl;
            }
            break;
        case 5:
            cout << "Masukkan data node yang ingin diretrieve: ";
            cin >> fajar_2311102192;
            tempNode = root;
            while (tempNode && tempNode->data != fajar_2311102192)
            {
                if (tempNode->left && tempNode->left->data == fajar_2311102192)
                    tempNode = tempNode->left;
                else if (tempNode->right && tempNode->right->data == fajar_2311102192)
                    tempNode = tempNode->right;
                else if (tempNode->left)
                    tempNode = tempNode->left;
                else if (tempNode->right)
                    tempNode = tempNode->right;
                else
                    tempNode = NULL;
            }
            if (tempNode)
            {
                retrieve(tempNode);
            }
            else
            {
                cout << "Node tidak ditemukan!" << endl;
            }
            break;
        case 6:
            cout << "Masukkan data node yang ingin dicari: ";
            cin >> fajar_2311102192;
            tempNode = root;
            while (tempNode && tempNode->data != fajar_2311102192)
            {
                if (tempNode->left && tempNode->left->data == fajar_2311102192)
                    tempNode = tempNode->left;
                else if (tempNode->right && tempNode->right->data == fajar_2311102192)
                    tempNode = tempNode->right;
                else if (tempNode->left)
                    tempNode = tempNode->left;
                else if (tempNode->right)
                    tempNode = tempNode->right;
                else
                    tempNode = NULL;
            }
            if (tempNode)
            {
                find(tempNode);
            }
            else
            {
                cout << "Node tidak ditemukan!" << endl;
            }
            break;
        case 7:
            cout << "Masukkan data node yang ingin ditampilkan child-nya: ";
            cin >>fajar_2311102192;
            tempNode = root;
            while (tempNode && tempNode->data != fajar_2311102192)
            {
                if (tempNode->left && tempNode->left->data ==fajar_2311102192)
                    tempNode = tempNode->left;
                else if (tempNode->right && tempNode->right->data ==fajar_2311102192)
                    tempNode = tempNode->right;
                else if (tempNode->left)
                    tempNode = tempNode->left;
                else if (tempNode->right)
                    tempNode = tempNode->right;
                else
                    tempNode = NULL;
            }
            if (tempNode)
            {
                showChild(tempNode);
            }
            else
            {
                cout << "Node tidak ditemukan!" << endl;
            }
            break;
        case 8:
            cout << "Masukkan data node yang ingin ditampilkan descendant-nya: ";
            cin >> fajar_2311102192;
            tempNode = root;
            while (tempNode && tempNode->data != fajar_2311102192)
            {
                if (tempNode->left && tempNode->left->data == fajar_2311102192)
                    tempNode = tempNode->left;
                else if (tempNode->right && tempNode->right->data ==fajar_2311102192)
                    tempNode = tempNode->right;
                else if (tempNode->left)
                    tempNode = tempNode->left;
                else if (tempNode->right)
                    tempNode = tempNode->right;
                else
                    tempNode = NULL;
            }
            if (tempNode)
            {
                showDescendants(tempNode);
            }
            else
            {
                cout << "Node tidak ditemukan!" << endl;
            }
            break;
        case 9:
            cout << "\nPreOrder :" << endl;
            preOrder(root);
            cout << "\n"
                 << endl;
            break;
        case 10:
            cout << "InOrder :" << endl;
            inOrder(root);
            cout << "\n"
                 << endl;
            break;
        case 11:
            cout << "PostOrder :" << endl;
            postOrder(root);
            cout << "\n"
                 << endl;
            break;
        case 12:
            characteristic();
            break;
        case 13:
            clear();
            break;
        case 14:
            cout << "Bye byee!!" << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
        }
    } while (choice != 14);

    return 0;
}
```


Screnshoot OUTPUT :

![Screenshot 2024-05-29 233342](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/fe4d70b1-2b8a-424e-8969-73eff5ff5605)

![Screenshot 2024-05-29 233403](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/c1b54fbe-eb8a-405a-b894-57d9b98a0bbb)

![Screenshot 2024-05-29 233423](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/bf875255-383e-4fde-a5c8-0ccd8f4ea654)

![Screenshot 2024-05-29 233447](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/af2a6c6d-a3fb-490f-befc-9f8f802c5f0f)

![Screenshot 2024-05-29 233505](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/8f9c761d-f8e4-4437-aa0d-3f2cc2a43c7c)

![Screenshot 2024-05-29 233531](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/55178e3f-fda7-47a0-b5d6-83e1f9bf9ca8)

![Screenshot 2024-05-29 233559](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/d7933b5a-4cff-40f9-b8ae-040de13c7dd6)

![Screenshot 2024-05-29 233616](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/e9240afe-64de-45a6-91f8-3850e15eff46)

![Screenshot 2024-05-29 233634](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/d9a5be43-fa8d-4bc1-bebc-7caf9febc6b6)

![Screenshot 2024-05-29 233648](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/e0b78e4b-93c8-4ff1-bc2d-941cebd9f2a7)

![Screenshot 2024-05-29 233702](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/afe3742d-49d0-483d-89a5-93e5475c9f74)

![Screenshot 2024-05-29 233718](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/01821269-792f-4afb-9097-54a7fe706e2a)

![Screenshot 2024-05-29 233739](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/2b1e0f37-e59a-4d46-afca-eaa31b74d5ab)


![Screenshot 2024-05-29 233756](https://github.com/fajarfzmi/Struktur-Data-Assignment/assets/161665789/5835196a-6e5b-492b-8213-b3bf4f779b1b)



DESKRIPSI PROGRAM :

Program ini memungkinkan pengguna untuk membuat dan memanipulasi struktur pohon biner dengan berbagai operasi seperti penambahan node, penghapusan node, dan penelusuran tree.

KESIMPULAN :

Program-program di atas, yaitu Program Graf dan Program Pohon, adalah contoh implementasi struktur data graf dan pohon dalam bahasa pemrograman
C++. Program Graf memungkinkan pengguna untuk membangun graf dengan memasukkan bobot antar simpul, sementara Program Pohon memungkinkan
pengguna untuk membangun pohon dengan menambahkan simpul. Kedua program tersebut menggunakan konsep dasar seperti map, vector, dan fungsi. Program
Pohon juga memiliki fitur interaktif yang memungkinkan pengguna untuk memilih menu dan melakukan operasi pada pohon yang dibuat. Dengan menggunakan
program-program ini, pengguna dapat memahami konsep dan penggunaan struktur data graf dan pohon, serta menerapkannya dalam aplikasi yang lebih kompleks.
Program-program tersebut memberikan pengguna kontrol penuh untuk membuat dan memanipulasi struktur data graf dan pohon sesuai kebutuhan mereka. Meskipun
sederhana, program-program ini membantu pengguna mempelajari dan mengimplementasikan struktur data graf dan pohon dalam pemrograman

DAFTAR PUSTAKA :

[1]  A Zein, ES Eriana - 2022 - repository.unpam.ac.id
