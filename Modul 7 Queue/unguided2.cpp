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