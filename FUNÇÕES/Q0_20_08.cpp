#include <iostream>
#include <math.h>
#include <conio.h>
#include <locale.h>
#include <stack>

using namespace std;
int valor = 0;
char resposta;
int conversao = 0;

void pergunta(){
	cout << "Ol� gostaria de realizar alguma convers�o?: (S/N)"<<endl;
	cin >> resposta;
}

void converterBinario();
void converterDecimal();
void converterOctal();
void converterHexadecimal();

void tipo_de_conversao(){
	cout << "+---------------------------------------+"<<endl;
	cout << "| Qual convers�o voc� deseja realizar?: |"<<endl;
	cout << "+---------------------------------------+"<<endl;
	cout << "| 1* Converter para Binario             |"<<endl;
	cout << "| 2* Converter para Decimal             |"<<endl;
	cout << "| 3* Converter para Ocatl               |"<<endl;
	cout << "| 4* Converter para Hexadecimal         |"<<endl;
	cout << "+---------------------------------------+"<<endl;
	cin >> conversao;
	switch(conversao){
		case 1:
			cout << "Op��o de Convers�o Binaria"<<endl;
			converterBinario();
			break;
		case 2:
			cout << "Op��o de Convers�o Binaria"<<endl;
			converterDecimal();
			break;
		case 3:
			cout << "Op��o de Convers�o Binaria"<<endl;
			converterOctal();
			break;
		case 4:
			cout << "Op��o de Convers�o Binaria"<<endl;
			converterHexadecimal();
			break;
	}
}

void converterBinario(){
	stack<int> binario;
		
	if(valor == 0){
		cout << "O n�mero em bin�rio � 0"<<endl;
	}
	
	while(valor > 0){
		binario.push(valor%2);
		valor /= 2;
	}
	
	cout << "O valor em Bin�rio �: ";
	while(!binario.empty()){
		cout<<binario.top();
		binario.pop();
	}
	cout<<endl;
}

void converterDecimal(){
	
}

void converterOctal(){
	
}

void converterHexadecimal(){
	
}

int main(){
	setlocale(LC_ALL,"");
	pergunta();
	if(tolower(resposta) == 's'){
		cout << "Digite um valor: "<<endl;
		cin >> valor;
		cout << "Ok, precione qualquer tecla para iniciar: "<<endl;
		getch();
		tipo_de_conversao();
	}else{
		cout << "N";
	}
}
