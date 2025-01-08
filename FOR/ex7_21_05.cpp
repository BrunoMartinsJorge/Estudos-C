#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define t 5
float A[t];
float B[t];
float C[t];
int i;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<t;i=i+1){
		cout << "Vetor A: Digite o " << i+1 << "º número: ";
		cin >> A[i];
	}
	for(i=0;i<t;i=i+1){
		cout << "Vetor B: Digite o " << i+1 << "º número; ";
		cin >> B[i];
	}
	for(i=0;i<t;i=i+1){
		C[i] = A[i]+B[i];
		cout << "Na " << i+1 << "ª casa do vetor C, esta alocado o número: " << C[i] << endl;
	}
}
