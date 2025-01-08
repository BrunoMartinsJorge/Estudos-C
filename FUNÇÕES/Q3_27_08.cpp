#include <iostream>
#include <math.h>
#include <locale.h>
#define t 8
using namespace std;
int A[t];

void leitura(){
	for(int i=0;i<t;i++){
		cout << "Digite um valor: ";
		cin >> A[i];
	}
}

int maior(){
	int numMaior = A[0];
	for(int i=0;i<t;i++){
		if(A[i] > numMaior){
			numMaior = A[i];
		}
	}
	return numMaior;
}

int menor(){
	int numMenor = A[0];
	for(int i=0;i<t;i++){
		if(A[i] < numMenor){
			numMenor = A[i];
		}
	}
	return numMenor;
}

int multiplicar(){
	int ultimo = A[t-1];
	for(int i=0;i<t;i++){
		cout << "A multiplicação entre "<<A[i]<<" vezes "<<ultimo<<" é igual á: "<<A[i]*ultimo<<endl;
	}
}

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "O maior elemento é o número: "<<maior()<<endl;
	cout << "O menor elemento é o número: "<<menor()<<endl;
	multiplicar();
}
