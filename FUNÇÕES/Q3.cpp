#include <iostream>
#include <math.h>
#include <locale.h>
#define t 5

float V[t] = {1,-2,0,4,-5}, media(float[]);
int positivos(), negativos(), nulos();

using namespace std;
int main(){
	setlocale(LC_ALL,"");
	cout << "A m�dia dos elementos do vetor �: "<<media(V)<<endl;
	cout << "A quantidade de elementos positivos �: "<<positivos()<<endl;
	cout << "A quantidade de elementos negativos �: "<<negativos()<<endl;
	cout << "A quantidade de elementos nulos �: "<<nulos()<<endl;
}

float media(float B[]){
	float soma = 0;
	int cont = 0;
	for(int i=0;i<t;i++){
		cont++;
		soma += B[i];
	}
	return soma/cont;
}

int positivos(){
	int cont = 0;
	for(int i=0;i<t;i++){
		if(V[i]>=0){
			cont++;
		}
	}
	return cont;
}

int negativos(){
	int cont = 0;
	for(int i=0;i<t;i++){
		if(V[i]<0){
			cont++;
		}
	}
	return cont;
}

int nulos(){
	int cont = 0;
	for(int i=0;i<t;i++){
		if(V[i]==0){
			cont++;
		}
	}
	return cont;
}
