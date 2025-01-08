#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
void escrever();
void calcular();
void digitar();
float Z[4][3], soma[4];
int main(){
		setlocale(LC_ALL,"");
		escrever();
		calcular();
		digitar();
}

void escrever(){
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout << "Digite o número: ["<<i<<"]["<<j<<"]: ";
			cin >> Z[i][j];
		}
	}
}

void calcular(){
	for(int j=0;j<3;j++){
		for(int i=0;i<4;i++){
			soma[j] += Z[i][j];
		}
	}
}

void digitar(){
	for(int j=0;j<3;j++){
		cout << "Soma da coluna: " << j+1 << " = " << soma[j] << endl;
	}
}
