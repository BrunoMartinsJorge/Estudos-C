#include <iostream>
#include <math.h>
#include <locale.h>
#define t 10

float V[t], soma(), mult(), raiz();
void leitura();

using namespace std;
int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "A soma dos maiores ou iguais � que 10 s�o: "<<soma()<<endl;
	cout << "A mult. dos maiores que 0 s�o: "<<mult()<<endl;
	raiz();
}

void leitura(){
	for(int i=0;i<t;i++){
		cout << "Digite o n�mero ["<<i<<"]: ";
		cin >> V[i];
	}
}

float soma(){
	float soma = 0;
	for(int i=0;i<t;i++){
		if(V[i]>=10){
			soma += V[i];
		}
	}
	return soma;
}

float mult(){
	float mult = 1;
	for(int i=0;i<t;i++){
		if(V[i]>0){
			mult *= V[i];
		}
	}
	return mult;
}

float raiz(){
	for(int i=0;i<t;i++){
		if(V[i]>3){
			cout << "A raiz quadrada do elemento "<<V[i]<<" � igual �: "<<sqrt(V[i])<<endl;
		}
	}
}
