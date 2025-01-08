#include <iostream>
#include <math.h>
#include <locale.h>
#define t 6

using namespace std;

float v[t];

void leitura(){
	for(int i=0;i<t;i++){
		cout << "Digite um número: ";
		cin >> v[i];
	}
}

float media(){
	float media = 0;
	for(int i=0;i<t;i++){
		media += v[i];
	}
	return media/t;
}

void qtd(){
	int cont = 0;
	for(int i=0;i<t;i++){
		if(v[i]>=10){
			cont++;
		}
	}
	if(cont==0){
		cout << "Nenhum elemento >= 10!"<<endl;
	}else{
		cout << "Foram encontrados "<<cont<<" elementos >= 10!"<<endl;
	}
}

float maior(){
	float maior = v[0];
	for(int i=0;i<t;i++){
		if(maior<v[i]){
			maior = v[i];
		}
	}
	return maior;
}

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "A média entre os elementos é de: "<<media()<<endl;
	qtd();
	cout << "O maior entre os elementos é de: "<<maior()<<endl;
}
