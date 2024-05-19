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