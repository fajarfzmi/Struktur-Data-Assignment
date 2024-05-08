#include <iostream>
using namespace std;

// fajar farizqi azmi
// 2311102192
// if-11-e

     struct tumpukan
    {
         string isi[192]; int atas;
         };


     void push(tumpukan &T, const string &x)
    {
         if (T.atas == 192)
         {
             cout << "Tumpukan Sudah Penuh"; return;
             }


     T.atas++; T.isi[T.atas] = x;
    }


      string pop(tumpukan &T)
    {
      if (T.atas == 0)
    {
             cout << "Tumpukan sudah kosong";
     return "";
    }


         string hasil = T.isi[T.atas]; T.atas--;
     return hasil;
 }


  int main()
 {
     string kalimat; tumpukan T; T.atas = 0;

         cout << "Masukkan kata: "; getline(cin, kalimat);

         cout << "\nData asli: " << kalimat;


     for (char c : kalimat)
    {
         push(T, string(1, c));
        }


            cout << "\nData: "; while (T.atas > 0)
        {
      cout << pop(T);
    }


  cout << "\n\n";
 
  return 0;
}
