#include <iostream>
#include <locale.h>
#include <conio.h>
#define t 50
int final, inicio = 0;
using namespace std;

struct tipo {
    int n1;
    float n2;
    bool n3;
};

tipo V[t];

void iniciar() {
    final = -1;
    inicio = 0;
}

void incerir(int n1, float n2, bool n3) {
    if(final < t - 1) {
        final++;
        V[final].n1 = n1;
        V[final].n2 = n2;
        V[final].n3 = n3;
    } else {
        cout << "Lista cheia..." << endl;
    }
}

void imprimir1(){
	float media = 0;
	int cont = 0;
	if(final > -1){
		for(int i=0;i<t;i++){
			if(V[i].n3){
				media+=V[i].n2;
				cont++;
			}
		}
		cout << "A média dos elementos positivos de N2 "<<media/cont<<endl;
		cout << "Soma: "<<media<<endl;
		cout << "Elementos: "<<cont<<endl;
	}else{
		cout << "Lista vazia..."<<endl;
	}
}

void imprimir2(){
	if(final > -1){
		int cont = 0;
		for(int i=0;i<t;i++){
			if(V[i].n1 > 10 && !V[i].n3){
				cont++;	
			}
		}
		cout << "Existem "<<cont<<" elementos em que N1 é > 10, e N3 é falso!"<<endl;
	}else{
		cout << "Lista vazia..."<<endl;
	}
}

void imprimir3(){
		if(final > -1){
		for(int i=0;i<t;i++){
			if(V[i].n1>V[i].n2){
				V[i].n2*=1.10;
				cout << "Valor de N2 < que N1 encontrado, valor ajustado: "<<V[i].n2<<endl;
			}
		}
	}else{
		cout << "Lista vazia..."<<endl;
	}
}

int main() {
    setlocale(LC_ALL, "");
    iniciar();
    incerir(1,2,true);
    incerir(2,2,true);
    incerir(1,2,true);
    incerir(6,2.1,true);
    incerir(2,3,true);
    incerir(1,2,true);
    incerir(1,2.2,false);
    incerir(1,2,false);
    incerir(1,23,false);
    incerir(2,2,false);
    incerir(32,9,false);
    incerir(1,9.212,false);
    incerir(1,2,false);
    incerir(1,2,false);
    imprimir1();
    cout << "-------------------"<<endl;
    imprimir2();
    cout << "-------------------"<<endl;
    imprimir3();
}

