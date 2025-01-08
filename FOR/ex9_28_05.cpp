#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int A[5];
int B[5];
int C[10];
int i, j;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<5;i=i+1){
		cout << "Digite o "<< i+1<< "º número do vetor A: ";
		cin >> A[i];
		cout << "Digite o "<< i+1<< "º número do vetor B: ";
		cin >> B[i];
	}
	j=0;
	for(i=0;i<5;i=i+1){
		C[j] = A[i];
		j=j+1;
		C[j] = B[i];
		j=j+1;
	}
	system("cls");
	for(j=0;j<10;j=j+1){
		cout << " " << C[j] << " ";
	}
}
