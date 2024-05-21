// fajar farizqi azmi
// 2311102192
// if-11-e

#include <iostream>
using namespace std;
int countOccurrences(int arr[], int size, int target)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int data[] = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};
    int target = 4;
    int occurrences = countOccurrences(data, sizeof(data) / sizeof(data[0]), target);
    cout << "Jumlah angka " << target << " dalam array: " << occurrences << endl;
    return 0;
}