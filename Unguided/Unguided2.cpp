#include <iostream> 
#include <string> 

using namespace std;

struct mahasiswa{ 
    string nama; string jurusan; float ipk;
};

int main(){

mahasiswa mhs;

mhs.nama="fajar farizqi azmi"; 
mhs.jurusan="Teknik Informatika"; 
mhs.ipk=4.00;

cout<<"DATA MAHASISWA"<<endl;
cout<<"Nama	: "<<mhs.nama<<endl; 
cout<<"Jurusan : "<<mhs.jurusan<<endl; 
cout<<"IPK	: "<<mhs.ipk<<endl;

return 0;
}