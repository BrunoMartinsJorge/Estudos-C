#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define t 5
float A[t];
int cont = 0;
int i;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<t;i=i+1){
		cout << "Vetor A: Digite o " << i+1 << "� n�mero: ";
		cin >> A[i];
	}
	for(i=0;i<t;i=i+1){
		if(A[i] > i){
			cont = cont + 1;
		}
	}
	cout << "Cerca de " << cont << " elementos s�o maiores que seus �ndices!";
}
