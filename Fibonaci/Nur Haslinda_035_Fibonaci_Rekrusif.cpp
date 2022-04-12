//Nur Haslinda_21091397035

#include<iostream>
using namespace std;
 
int fib(int nilai /*inisialisasi Fariable*/)
{
	//kasus dasar
    if (nilai <= 1)
        return nilai;
    //kasus rekrusif
    else
    	return fib(nilai-1) + fib(nilai-2); //Rumus Fibonasi
}
 
int main () {
	
//Inisialisasi Variable
	int input_n;
	
//Perintah Input Nilai
	cout<<"Input Bilangan Finonasi	: ";
	cin>>input_n;
	
//Perintah menampilkan bilangan fibonaci
	cout<<"Nilai Bilangan Finobaci	: ";
    cout << fib(input_n); //output hasil
    return 0;
}
