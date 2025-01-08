#include <iostream>
#include <math.h>
#include <locale.h>
#define t 50

struct ABC {
	int codigo;
	char nome[50];
	float salario;
	int nr_filhos;
};

ABC dados_empresa[t];
    
using namespace std;

void media_salarios(){
	float soma = 0;
	for(int i=0; i<t; i++){
		soma += dados_empresa[i].salario;
	}
	cout << "A m�dia sal�rial da empresa � de "<<soma/t<<endl;
}

void verifica_salario(){
	ABC maior_salario = dados_empresa[0];
	for(int i=0;i<t;i++){
		if(dados_empresa[i].salario > maior_salario.salario){
			maior_salario = dados_empresa[i];
		}
	}
	cout << "A pessoa com o maior sal�rio � "<<maior_salario.nome<<" com R$:"<< maior_salario.salario<<endl;
}

void verifica_filhos(){
	ABC maior_nrfilhos = dados_empresa[0];
	for(int i=0;i<t;i++){
		if(dados_empresa[i].nr_filhos > maior_nrfilhos.nr_filhos){
			maior_nrfilhos = dados_empresa[i];
		}
	}
	cout << "A pessoa com o maior qtd de filhos � "<<maior_nrfilhos.nome<<" com "<< maior_nrfilhos.nr_filhos<<endl;
}

void media_filhos(){
	int media = 0;
	for(int i=0;i<t;i++){
		media += dados_empresa[i].nr_filhos;
	}
	cout << "A m�dia no n�mero de filhos dos funcionarios(as) � de: "<<media/t;
}

int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		cout << "Digite o codigo do(a) funcionario(a): ";
		cin >> dados_empresa[i].codigo;
		cout << "Digite o nome do(a) funcionario(a): ";
		cin >> dados_empresa[i].nome;
		cout << "Digite o salario do(a) funcionario(a): ";
		cin >> dados_empresa[i].salario;
		cout << "Digite o n�mero de filhos do(a) funcionario(a): ";
		cin >> dados_empresa[i].nr_filhos;
	}
	media_salarios();
	verifica_salario();
	verifica_filhos();
	media_filhos();
}
