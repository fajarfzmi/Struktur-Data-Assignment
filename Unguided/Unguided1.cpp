#include <iostream> 

using namespace std;

int tambah(int x, int y) {
return x + y;
}

float kali(float m, float n){
return m * n;
}

int main() {
int x = 200; 
int y = 30; 
float m = 8; 
float n = 4;

cout << "Hasil penjumlahan	dari 200 + 30 adalah " << tambah(x, y) << endl;
cout << "Hasil perkalian 8 x 4 adalah " << kali(m, n);
}
