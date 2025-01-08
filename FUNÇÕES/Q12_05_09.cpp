#include <iostream>
#include <conio.h>
#include <math.h> 
#include <locale.h>
#define t 8
using namespace std;

float A[t];
void leitura();
float soma();
int qtdNegativos();
float maior();

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "---------------------------------------"<<endl;
	cout << "A soma entre os >= 20 e < 30 é: "<<soma()<<endl;
	cout << "A quantidade de negativos "<<qtdNegativos()<<endl;
	cout << "O maior elemento "<<maior()<<endl;
}

void leitura(){
	for(int i=0;i<t;i++){
		cout << "Digite o número A["<<i<<"]: ";
		cin >> A[i];
	}
}

float soma(){
	int soma = 0;
	for(int i=0;i<t;i++){
		if(A[i]>=20 && A[i]<30){
			soma += A[i];
		}
	}
	return soma;
}

int qtdNegativos(){
	int cont = 0;
	for(int i=0;i<t;i++){
		if(A[i]<0){
			cont++;
		}
	}
	return cont;
}

float maior(){
	float maior = A[0];
	for(int i=0;i<t;i++){
		if(maior < A[i]){
			maior = A[i];
		}
	}
	return maior;
}
