#include <iostream>
#include <math.h>
#include <locale.h>
#include <conio.h>
using namespace std;

void somar(){
	float num1 = 0;
	float num2 = 0;
	system("cls");
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "A soma entre "<<num1<<" e "<<num2<<" é igual á: "<<num1+num2<<endl;
}

void subtrair(){
	float num1 = 0;
	float num2 = 0;
	system("cls");
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "A subtração entre "<<num1<<" e "<<num2<<" é igual á: "<<num1-num2<<endl;
}

void multiplicar(){
	float num1 = 0;
	float num2 = 0;
	system("cls");
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "A multiplicação entre "<<num1<<" e "<<num2<<" é igual á: "<<num1*num2<<endl;
}

void dividir(){
	float num1 = 0;
	float num2 = 0;
	system("cls");
	cout << "Digite o primeiro numero: ";
	cin >> num1;
	cout << "Digite o segundo numero: ";
	cin >> num2;
	cout << "A divisão entre "<<num1<<" e "<<num2<<" é igual á: "<<num1/num2<<endl;
}

void tela(){
	cout << "|-<>-------------<>-|"<<endl;
	cout << "| Somar            1|"<<endl;
	cout << "| Subtrair         2|"<<endl;
	cout << "| Multiplicar      3|"<<endl;
	cout << "| Dividir          4|"<<endl;
	cout << "| Sair             S|"<<endl;
	cout << "|-<>-------------<>-|"<<endl;
	cout << "|><--Escolha uma--><|"<<endl;
}

int main(){
	setlocale(LC_ALL,"");
	char sair='N';
	while(sair != 'S'){
		tela();
		char op;
		op = toupper(getche());
		switch(op){
			case'1':{
				somar();
				break;
			}
			case'2':{
				subtrair();
				break;
			}
			case'3':{
				multiplicar();
				break;
			}
			case'4':{
				dividir();
				break;
			}
			case'S':{
				sair='S';
				system("cls");
				break;
			}
			default:{
				cout<< "Opção invalida! ERROR";
				cout<< "Digite certo ANIMAL!";
				break;
			}
		}
	}
}
