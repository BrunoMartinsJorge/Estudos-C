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

void verificarDP(){
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){	
			if(i==j){
				cout << A[i][j]<< " pertence a diagonal principal"<<endl;
			}
		}
	}
}

void soma(){
	int soma = 0;
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){	
			if(i>j){
				soma += A[i][j];
			}
		}
	}
	cout << "A soma entres os elementos abaixo da DP são: "<<soma;
}

int main(){
	setlocale(LC_ALL,"");
	leitura();
	verificarDP();
	soma();
}
