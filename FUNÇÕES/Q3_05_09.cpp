#include <iostream>
#include <math.h>
#include <locale.h>
#define t 3
int A[t][t];
using namespace std;

void leitura();
int verificarParDP();
int somaImpar();
void acimaDp();

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "Existem "<<verificarParDP()<<" números pares na diagonal principal."<<endl;
	cout << "A soma entre os impares da Diagonal Secundária são: "<<somaImpar()<<endl;
	acimaDp();
}

void leitura(){
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout << "Digite o número ["<<i<<"]["<<j<<"]: ";
			cin >> A[i][j];
		}
	}
}


int verificarParDP(){
	int cont = 0;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(i==j && A[i][j]%2 == 0){
				cont++;
			}
		}
	}
	return cont;
}

int somaImpar(){
	int soma = 0;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(i+j==t-1 && A[i][j]%2 != 0){
				soma += A[i][j];
			}
		}
	}
	return soma;
}

void acimaDp(){
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(i<j){
				cout << "O valor "<<A[i][j]<<" está acima da Diagonal Principal!"<<endl;
			}
		}
	}
}
