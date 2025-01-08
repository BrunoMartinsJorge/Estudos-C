#include <iostream>
#include <math.h>
#include <locale.h>
# define t 3

int V[t][t];

using namespace std;

void leitura(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		for(int j =0;j<t;j++){
			cout << "Digite o número ["<<i<<"]["<<j<<"]: ";
			cin >> V[i][j];
		}
	}
}

int dp(){
	for(int i=0;i<t;i++){
		for(int j =0;j<t;j++){
			if(i==j){
				cout << V[i][j]<<" pertence a Diagonal principal!"<<endl;
			}
		}
	}
}

int soma(){
	int soma = 0;
	for(int i=0;i<t;i++){
		for(int j =0;j<t;j++){
			if(i>j){
				soma += V[i][j];
			}
		}
	}
	return soma;
}

int main(){
	leitura();
	dp();
	cout << "A soma dos acima da Diagonal Principal é igual á "<<soma();
}
