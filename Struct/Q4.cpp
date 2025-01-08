#include <iostream>
#include <math.h>
#include <locale.h>
#define t 10

struct atletas {
	char nome[75];
	int idade;
	float altura;
	char esporte[50];
};

atletas lista_atletas[t];

using namespace std;

void verifica_idade(){
	atletas mais_velho = lista_atletas[0];
	for(int i=0;i<t;i++){
		if(lista_atletas[i].idade > mais_velho.idade){
			mais_velho = lista_atletas[i];
		}
	}
	cout << "O mais velho(a) é "<<mais_velho.nome<<endl;
}

void verifica_altura(){
	atletas mais_alto = lista_atletas[0];
	for(int i=0;i<t;i++){
		if(lista_atletas[i].altura > mais_alto.altura){
			mais_alto = lista_atletas[i];
		}
	}
	cout << "O mais alto(a) é "<<mais_alto.nome<<endl;
}

int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		cout << "Nome do(a) atleta: ";
		cin >> lista_atletas[i].nome;
		cout << "Idade do(a) atleta: ";
		cin >> lista_atletas[i].idade;
		cout << "Altura do(a) atleta: ";
		cin >> lista_atletas[i].altura;
		cout << "Esporte do(a) atleta: ";
		cin >> lista_atletas[i].esporte;
	}
	verifica_idade();
	verifica_altura();
}
