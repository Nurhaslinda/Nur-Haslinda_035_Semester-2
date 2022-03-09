#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
 char nama[20];
 char gender[20];
  cout<<endl<<endl;
 cout<<"\t ----------------    Huruf Kecil      ---------------- "<<endl<<endl;
 cout<<"\t Masukkan Nama dengan Huruf Kecil            : "; gets(nama);
 cout<<endl;
 strupr(nama);
 cout<<endl<<endl;
 cout<<"\t ----------------    Huruf Besar      ---------------- "<<endl<<endl;
 cout<<"\t Hasil Perubahan NAMA dengan Huruf Kapital   : "<<nama<<endl;
}
