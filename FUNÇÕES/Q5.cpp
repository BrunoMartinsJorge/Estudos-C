#include <iostream>
#include <math.h>
#include <locale.h>
#define t 5

int raiz(), V[t];
void leitura();

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	leitura();
	raiz();
}

void leitura(){
	for(int i=0;i<t;i++){
		cout << "Digite o número ["<<i<<"]: ";
		cin >> V[i];
	}
}

int raiz(){
	for(int i=0;i<t;i++){
		if(V[i]>0){
			cout << "A raiz quadrada de "<<V[i]<<" é igual á: "<< sqrt(V[i])<<endl;
		}
	}
}
