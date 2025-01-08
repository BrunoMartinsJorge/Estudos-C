#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int Z[3][3];
int i;
int j;
int q;
int r;
int qtdImp;
int qtdPar;
int soma;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << "Digite um número: ";
			cin >> Z[i][j];
			q=Z[i][j]/2;
			r=Z[i][j]-q*2;
			if(r==0){
				qtdImp = qtdImp + 1;
			}else{
				qtdPar = qtdPar + 1;
			}
		}
	}
	cout << "Qtd de pares: " << qtdPar << endl;
	cout << "Qtd de impares: " << qtdImp << endl;
}
