#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int const T = 10;
float vetor[T];
int contMcem = 0;
int contMed = 0;
float med = 0;
int i;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<T;i=i+1){
		cout << "Digite o "<< i+1 << "� n�mero: ";
		cin >> vetor[i];
	}
	for(i=0;i<T;i=i+1){
		if(vetor[i] > 100){
			contMcem = contMcem + 1;
		}
	}
	for(i=0;i<T;i=i+1){
		if(vetor[i] < 50){
			contMed = contMed + 1;
			med = med + vetor[i];
		}
	}
	if(contMcem > 0){
		cout << "N�meros maiores que 100: " << contMcem << endl;
	}else{
		cout << "N�o existem n�meros maiores que 100!" << endl;
	}
	cout << "A m�dia dos n�meros menores que 50 s�o: " << med/contMed;
}
