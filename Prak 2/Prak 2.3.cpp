#include<iostream>
using namespace std;

int main(){
	int matA[2] [2] = {4, 8, 2, 10};
	int matB[2] [2] = {-5, 4, 8, -12};
	
	cout<<"Matriks A"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matA[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"Hasil perkalian matriks A dengan eksponen 5"<<endl;
	for (int i=0; i<2; i++){
		for (int j=0; j<2; j++){
			cout<<matA[i][j]*matA[i][j]*matA[i][j]*matA[i][j]*matA[i][j]<<" ";
		}
		cout<<endl;
	}
	system("PAUSE");
	return 0;
}
