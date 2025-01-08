#include <iostream>
#include <math.h>
#include <locale.h>
#define t 20

struct dados {
	int codigo;
	char nome[75];
	int idade;
};

dados lista_dados[t];

using namespace std;

void infor_dados(){
	dados dados_mais_velho = lista_dados[0];
	for(int i=0;i<t;i++){
		if(lista_dados[i].idade > dados_mais_velho.idade){
			dados_mais_velho = lista_dados[i];
		}
	}
	cout << "A pessoa mais velha da lista é o(a) "<<dados_mais_velho.nome<<endl;
	int media_idades = 0;
	for(int i=0;i<t;i++){
		media_idades += lista_dados[i].idade;
	}
	cout << "A média das idades é de "<<media_idades/t<<endl;
	int qtdPessoasIdades = 0;
	for(int i=0;i<t;i++){
		if(lista_dados[i].idade >= 20 && lista_dados[i].idade <= 30){
			qtdPessoasIdades++;
		}
	}
	if(qtdPessoasIdades == 0){
		cout << "Ninguem com idade entre 30 e 20!"<<endl;
	}else{
		cout<<"Existem "<<qtdPessoasIdades<<" com idades entre 30 e 20 anos!";
	}
}

int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		cout << "Codigo da pessoa: ";
		cin >> lista_dados[i].codigo;
		cout << "Nome da pessoa: ";
		cin >> lista_dados[i].nome;
		cout << "Idade da pessoa: ";
		cin >> lista_dados[i].idade;
	}
	infor_dados();
}
