#include <iostream>
#include <math.h>
#include <locale.h>
#define t 5
using namespace std;
int N = 0;
int A = 0;
int V[t];

void leitura(){
for(int i=0; i<t;i++){
		cout << "Digite um valor: ";
		cin >> V[i];
	}
}

int buscarNegativos(int vetor[t]){
	for(int i=0; i<t;i++){
		if(vetor[i]<0){
			return vetor[i];
		}
	}
	return 0;
}

int soma(int vetor[t]){
	return vetor[0]+vetor[t-1];
}

int maiorQue10(int vetor[t]){
	int maior = 0;
	for(int i=0;i<t;i++){
		if(vetor[i]>10){
			maior = vetor[i];
		}
	}
	return maior;
}

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "Primeiro valor nulo: "<<buscarNegativos(V) <<endl;
	cout << "A soma entre o 1º e o ultimo número do vetor: "<<soma(V) <<endl;
	cout << "O ultimo maior que 10: "<< maiorQue10(V)<<endl;
}
