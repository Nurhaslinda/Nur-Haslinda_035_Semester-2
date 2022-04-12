//Nur Haslinda_21091397035

#include <iostream>
using namespace std;

int main(){

    //Inisialisasi Variabel
    int nilai, fib_n, fib_n1=1, fib_n2=0;

	//perintah menginputkan nilai 
    cout<<"Input bilangan fibonaci : ";
	cin>>nilai;

	//Rumus Fibonaci
    for (int looping=1; looping<nilai; looping++){
        fib_n=fib_n1+fib_n2;
        fib_n2=fib_n1;
        fib_n1=fib_n;
    }
    
    //Perintah menampilkan hasil fibonaci
    cout<<"Nilai bilangan Fibonaci	: ";
    cout<<fib_n;
    
    return 0;
}
