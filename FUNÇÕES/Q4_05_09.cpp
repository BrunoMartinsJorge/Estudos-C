#include <iostream>
#include <math.h>
#include <locale.h>
#define t 2
#define b 3
using namespace std;
int A[t][b];
int menor();
int maior();
int media();
void leitura();

int main(){
	setlocale(LC_ALL,"");
	leitura();
//	cout << "O menor elemento é "<<menor()<<endl;
	cout << "O maior elemento é "<<maior()<<endl;
//	cout << "A média dos maiores ou iguais há 5 é "<<media()<<endl;
}

void leitura(){
	for(int i=0; i<t;i++){
		for(int j=0;j<b;j++){
			cout << "Digite o número ["<<i<<"]["<<j<<"]: ";
			cin >> A[i][j];
		}
	}
}

int menor(){
	int menor = A[0][0];
	for(int i=0; i<t;i++){
		for(int j=0;j<b;j++){
			if(menor>A[i][j]){
				menor = A[i][j];
			}
		}
	}
	return menor;
}

int maior(){
	int maior = 0;
	for(int i=0; i<t;i++){
		for(int j=0;j<b;j++){
		if(maior<A[i][j]){
			maior = A[i][j];
			}
		}
	}
	return maior;
}

int media(){
	int media = 0;
	int cont = 0;
		for(int i=0; i<t;i++){
		for(int j=0;j<b;j++){
			if(A[i][j]>= 5){
				media += A[i][j];
				cont++;
			}
		}
	}
	return media/cont;
}
