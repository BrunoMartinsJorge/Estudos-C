#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int A[4][4];
int i;
int j;
float soma;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout << "Digite um número: ";
			cin >> A[i][j];
			if(A[i][j]%2 == 0 && A[i][j] >= 0){
				soma = soma + A[i][j];
			}else{
				cout << "Quadrado do impar: " << pow(A[i][j],2) << endl;
			}
		}
	}
	cout << "Soma dos pares: " << soma;
}
