#include <iostream>
#include <math.h>
#include <locale.h>

struct aleatorio {
	int n;
};

aleatorio v[10];
int qtdPar = 0;
int media = 0;

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<10;i++){
		cout << "Digite um valor: ";
		cin >> v[i].n;
		media += v[i].n;
		if(v[i].n%2 == 0){
			qtdPar++;
		}
	}
	cout<<"QTD:"<<qtdPar<<endl;
	cout<<"MEDIA:"<<media/10<<endl;
}
