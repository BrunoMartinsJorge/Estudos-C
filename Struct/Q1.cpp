#include <iostream>
#include <math.h>
#include <locale.h>
#define t 10

struct aleatorio {
	int n1;
	float n2;
};

aleatorio v[10];
int qtdPar = 0;
float media = 0;
int somaI;

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		cout << "Digite o N1 valor: ";
		cin >> v[i].n1;
		cout << "Digite o N2 valor: ";
		cin >> v[i].n2;
	}
	for(int i=0;i<t;i++){
		if(v[i].n2 >= 0 ){
			cout << "Raiz de " << v[i].n2 << " é: " << sqrt(v[i].n2)<<endl;
		}
		media += v[i].n2;
		if(v[i].n1%2 == 1){
			somaI += v[i].n1;
		}
	}
	cout<<"Soma:"<<somaI<<endl;
	cout<<"MEDIA:"<<media/10<<endl;
}
