// fajar farizqi azmi
// 2311102192
// if-11-e

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int binarySearch(string kalimat, char huruf)
{
    sort(kalimat.begin(), kalimat.end()); 

    int left = 0;
    int right = kalimat.length() - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (kalimat[mid] == huruf)
        {
            return mid; 
        }
        else if (kalimat[mid] < huruf)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; 
}

int main()
{
    string kalimat;
    char huruf;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> huruf;

    int indeks = binarySearch(kalimat, huruf);

    if (indeks == -1)
    {
        cout << "Huruf " << huruf << " tidak ditemukan dalam kalimat." << endl;
    }
    else
    {
        cout << "Huruf " << huruf << " ditemukan pada indeks " << indeks << " dalam kalimat." << endl;
    }

    return 0;
}
