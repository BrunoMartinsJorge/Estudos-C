#include<conio.h>
#include<iostream>
#include <locale.h>

using namespace std;
void iniciar();
void inserir(int,bool);
void remover();
#define t 10
struct dados{
 int n;
 bool status;
};
struct dados2{
	int n1;
	float n2;
};
dados2 vetor[t];
dados f[t];
int inicio, fim;

void consultar(){
	cout << "O próximo elemento da fila é o: "<<f[inicio+1].n<<"; "<<f[inicio].status<<endl;
}

void imprimir1(){
	if(fim > -1){
		for(int i=0;i<t;i++){
			cout << "Elemento de f["<<i<<"]: VALOR: "<<f[i].n<<"; VALOR BOLEANO "<<f[i].status<<endl;
		}
	}else{
		cout << "Lista vazia..."<<endl;
	}
}

void imprimir2(){
	if(fim > -1){
		for(int i=0;i<t;i++){
			if(f[i].status){
				cout << "Valor: "<< f[i].n<<"; Bool: "<<f[i].status<<endl;
			}
		}
	}else{
		cout << "Lista vazia..."<<endl;
	}
}

void imprimir3(){
	if(fim >- 1){
		for(int i=0;i<t;i++){
			if(f[i].n%2==0){
				cout << "Valor: "<<f[i].n<<"; Bool: "<<f[i].status<<endl;
			}
		}
	}
}

main(){
 setlocale(LC_ALL,"");
 iniciar();
 inserir(10,true);
 inserir(15,false);
 inserir(5,false);
 inserir(9,true);
 inserir(4,true);
 inserir(20,true);
 inserir(50,true);
 consultar();
 cout << "-------------------------------------"<<endl;
 imprimir1();
 cout << "-------------------------------------"<<endl;
 imprimir2();
 cout << "-------------------------------------"<<endl;
 imprimir3();
}
void iniciar(){
 inicio = 0;
 fim = -1;
}
void inserir(int valor,bool s){
 if(fim < t-1){
 fim++;
 f[fim].n = valor;
 f[fim].status = s;
 }
 else
 {
 cout << "\nFila Cheia";
 getch();
 }
}
