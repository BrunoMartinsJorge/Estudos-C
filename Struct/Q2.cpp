#include <iostream>
#include <math.h>
#include <locale.h>
#define t 10

struct alunos {
	char nome[75];
	float nota1;
	float nota2;
};

alunos dados_alunos[t];

using namespace std;

string decisao_final(float n1, float n2){
	float media = n1+n2;
	if(media/2>=7){
		return "aprovado";
	}else if(media/2>=5&&media/2<7){
		return "para exame";
	}else{
		return "reprovado";
	}
}

int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		cout << "Digite o nome do aluno(a): ";
		cin >> dados_alunos[i].nome;
		cout << "Digite a 1º do aluno(a): ";
		cin >> dados_alunos[i].nota1;
		cout << "Digite a 2º do aluno(a): ";
		cin >> dados_alunos[i].nota2;
	}
	for(int i=0; i < t; i++){
		cout << "O aluno(a) "<<dados_alunos[i].nome<<" foi "<<decisao_final(dados_alunos[i].nota1, dados_alunos[i].nota2)<<endl;
	}
}
