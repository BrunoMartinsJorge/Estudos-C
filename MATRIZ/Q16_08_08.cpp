#include <iostream>
#include <math.h>
#include <locale.h>
#define t 3
using namespace std;
float A[t][t];
float med = 0;
int qtd = 0;
int qtdMed = 0;
float soma = 0;
int main(){
		setlocale(LC_ALL,"");
		for(int i=0;i<t;i++){
			for(int j=0;j<t;j++){
				cout << "Digite o elemento["<<i<<"]["<<j<<"]: ";
				cin >> A[i][j];
				if(i+j == t-1){
					med = med + A[i][j];
					qtdMed++;
				}if(i==j && A[i][j] >= 0){
					qtd++;
				}
				if(i>j){
					soma = soma + A[i][j];
				}
			}
		}

cout << "A media dos elemento da diagonal principal: " <<med/qtdMed<<endl;
cout << "Quantidade de elementos maiores que 0 da principal: " << qtd<<endl;
cout << "Soma dos elementos abaixo da principal: " <<soma<<endl;
}
