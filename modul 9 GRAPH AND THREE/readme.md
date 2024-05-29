# <h1 align="center">LAPORAN PRAKTIKUM MODUL 9 GRAPH AND THREE</h1>
<p align="center">FAJAR FARIZQI AZMI_2311102192_IF-11-E</p>




  ## Dasar Teori 

  

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
        cout << "\nAlhamdulillah, Node " << data << " berhasil dibuat menjadi root." << endl;
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
            cout << "\nMantapp!! Node " << data << " berhasil ditambahkan ke child kiri " << node->data << endl;
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
            cout << "\nAlhamdulillah!! Node " << data << " berhasil ditambahkan ke child kanan " << node->data << endl;
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
            cout << "\nAlhamdulillah!! Node " << temp << " berhasil diubah menjadi " << data << endl;
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
        cout << "\nAlhamdulillah!! Node subtree " << node->data << " berhasil dihapus." << endl;
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
        cout << "\nAlhamdulillah!! Pohon berhasil dihapus." << endl;
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




DESKRIPSI PROGRAM :





KESIMPULAN :

Pencarian (Searching) adalah proses untuk menemukan suatu nilai dalam kumpulan data. Dalam contoh program, kita menggunakan algoritma Sequential Search untuk mencari data dalam array yang tidak terurut, 
dan Binary Search untuk mencari data dalam array yang sudah terurut. Sequential Search memeriksa setiap elemen secara berurutan, sementara Binary Search membagi data menjadi dua bagian dan
membandingkan dengan data tengah. Program-program ini membantu dalam mencari keberadaan karakter, menghitung jumlah huruf vokal dalam kalimat, dan menghitung jumlah kemunculan angka dalam array. Pemahaman tentang algoritma
pencarian dan pemrosesan data menjadi kunci dalam pengembangan perangkat lunak yang efisien dan optimal dalam pengolahan data.

DAFTAR PUSTAKA :

[1] A Nurhakim - Jurnal SIGMA, 2019 - jurnal.pelitabangsa.ac.id

[2] Y Religia - Pelita Teknologi, 2019 - jurnal.pelitabangsa.ac.id
