#include <iostream>
#include <math.h>
#include <locale.h>
#define t 5

int v[t];
using namespace std;

void leitura();
int soma();
int maior();
int menor();
void pares();
int media();

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "-----------------------------------------"<<endl;
	cout << "A soma é igual á "<<soma()<<endl;
	cout << "O maior elemento é "<<maior()<<endl;
	cout << "O menor elemento é "<<menor()<<endl;
	pares();
	cout << "A média é "<<media()<<endl;
}

void leitura(){
	for(int i=0;i<t;i++){
		cout << "Digite um valor: ";
		cin >> v[i];
	}
}

int soma(){
	int soma = 0;
	for(int i=0;i<t;i++){
		soma += v[i];
	}
	return soma;
}

int maior(){
	int maior = v[0];
	for(int i=0;i<t;i++){
		if(maior<v[i]){
			maior = v[i];
		}
	}
}

int menor(){
	int menor = v[0];
	for(int i=0;i<t;i++){
		if(menor>v[i]){
			menor = v[i];
		}
	}
	return menor;
}

void pares(){
	int contPares = 0;
	int contImpar = 0;
	for(int i=0;i<t;i++){
		int p = 0;
		int q = 0;
		p = v[i]/2;
		q = (p * 2) - v[i];
		if(q == 0){
			contPares++;
			cout << "O elemento "<<v[i]<<" é um par!"<<endl;
		}else{
			contImpar++;
			cout << "O elemento "<<v[i]<<" é um impar!"<<endl;
		}
	}
	cout << "Existem "<<contPares<<" elementos pares! E "<<contImpar<< " elementos impares!"<<endl;
}

int media(){
	float med = 0;
	int cont = 0;
	for(int i=0;i<t;i++){
		med += v[i];
		cont++;
	}
	return med/cont;
}
