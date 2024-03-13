#include <iostream> 
#include <map> 
#include <string> 

using namespace std;

int main() {
map <int, string> nama_mahasiswa { { 1, "faiz"}, { 2, "Bayu" },
{ 3, "novi" }, { 4, "Tio" }, { 5, "darmaji" } };

cout << nama_mahasiswa[1] << " " << nama_mahasiswa[5] << " " << nama_mahasiswa[3]<< endl;
}
