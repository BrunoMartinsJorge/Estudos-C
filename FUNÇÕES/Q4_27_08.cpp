#include <iostream>
#include <math.h>
#include <locale.h>
#define t 3
using namespace std;
int A[t][t];

void leitura(){
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout << "Digite um valor: ";
			cin >> A[i][j];
		}
	}
}

int somaPar(){
	int soma = 0;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(A[i][j]%2 == 0){
				soma += A[i][j];
			}
		}
	}
	return soma;
}

int divisivel(){
	int qtd = 0;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(A[i][j]%3 == 0){
				qtd += 1;
			}
		}
	}
	return qtd;
}

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "A soma entre os elementos pares é: "<< somaPar()<<endl;
	cout << "A quantidade de elementos divisiveis por 3 é: "<<divisivel()<<endl;
}
