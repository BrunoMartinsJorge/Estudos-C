#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
void escrever();
void calcular();
void digitar();
int A[3][3], B[3][3];
int main(){
		setlocale(LC_ALL,"");
		escrever();
		calcular();
		digitar();
}

void escrever(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Digite o número: ["<<i<<"]["<<j<<"]: ";
			cin >> A[i][j];
		}
	}
}

void calcular(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			B[i][j] = A[i][j] * (i+j);
		}
	}
}

void digitar(){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Soma da Matriz B ["<<i<<"]["<<j<<"]; Sendo (" <<i<<" + "<<j<<") x " << A[i][j] << " = " << B[i][j] << endl;
		}
	}
}
