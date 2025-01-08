#include <iostream>
#include <math.h>
#include <locale.h>
#define t 2

struct tipo_estado {
	float renda;
	char cidade[75];
	int nr_pessoas;
};

tipo_estado lista_estados[t];

using namespace std;

void nr_media_pessoas(){
	int qtdMed = 0;
	for(int i=0;i<t;i++){
		qtdMed += lista_estados[i].nr_pessoas;
	}
	cout << "A m�dia de pessoas por cidade � de "<<qtdMed<<endl;
}

float media_renda(){
	float renda_media = 0;
	for(int i=0;i<t;i++){
		renda_media += lista_estados[i].renda;
	}
	return renda_media/t;
}

void maior_populacao(){
	tipo_estado maior_n_pessoas = lista_estados[0];
	for(int i=0;i<t;i++){
		if(lista_estados[0].nr_pessoas > maior_n_pessoas.nr_pessoas){
			maior_n_pessoas = lista_estados[0];
		}
	}
	cout << "A cidade com maior popula��o � "<<maior_n_pessoas.cidade<<endl;
}

int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		cout << "Renda da f�milia: ";
		cin >> lista_estados[i].renda;
		cout << "Cidade da f�milia: ";
		cin >> lista_estados[i].cidade;
		cout << "N�mero de pessoas da cidade: ";
		cin >> lista_estados[i].nr_pessoas;
	}
	nr_media_pessoas();
	cout << "A renda m�dia � de "<<media_renda()<<endl;
	maior_populacao();
}
