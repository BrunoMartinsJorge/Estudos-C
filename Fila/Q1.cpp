#include<conio.h>
#include<iostream>
using namespace std;
void iniciar();
void inserir(int,bool);
void remover();
#define t 10
struct dados{
 int n;
 bool status;
};
void consultar();
void imprima1();
void imprima2();
void imprima3();
dados f[t];
int inicio, fim;
main(){
 iniciar();
 inserir(10,true);
 inserir(15,false);
 inserir(5,false);
 inserir(9,true);
 inserir(4,true);
 inserir(20,true);
 inserir(50,true);
 consultar();
 remover();
 consultar();
 iniciar();
 imprima1();
inserir(10,true);
imprima2();
imprima3();
}
//----------------
void iniciar(){
 inicio = 0;
 fim = -1;
}
//----------------
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
//----------------
void remover(){
 if(inicio > fim){
 cout << "\nFila Cheia";
 getch();
 }
 else
 {
 inicio++;
 if(inicio > fim){
 iniciar();
 }
 }
}
//----------------
void consultar(){
 if(inicio > fim){
 cout << "\nFila Vazia";
 getch();
 }
 else
 {
 cout << "\nTopo da Fila: " <<
f[inicio].n << " " << f[inicio].status<<endl;
 }
} 
 
// B
 void imprima1(){
 		if(inicio>fim){
		cout << "Vazia!";
	}else{
 		for(int i=inicio;i<fim;i++){
 			cout << "Elemento "<<f[i].n<<endl;
		}
	}
}

// C
void imprima2(){
	if(inicio>fim){
		cout << "Vazia!";
	}else{
	for(int i=inicio;i<fim;i++){
			if(f[i].status){
				cout<<"Elemento true:"<<f[i].n<<endl;
			}
		}
	}
}

// D
void imprima3(){
	if(inicio>fim){
		cout << "Vazia!";
	}else{
	for(int i=inicio;i<fim;i++){
		if(f[i].n%2 == 0){
			cout << "Elemento par:"<<f[i].n<<endl;
		}
	}
}
}
