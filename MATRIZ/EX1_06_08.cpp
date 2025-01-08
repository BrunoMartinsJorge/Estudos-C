#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
float A[3][4];
float med;
float soma;
float maior;
float armazem;
int main(){
		setlocale(LC_ALL,"");
//		C
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout << "Digite a quantidade de itens do produto "<<i+1<<" do armazem "<<j+1<<": ";
				cin >> A[i][j];
					if(j==3){
	 					med = med + A[i][j];
	 			}
			}
		}
//		B
		maior = A[1][0];
		armazem = 0;
		for(int j =0; j<4;j++){
			if(A[1][0] > maior){
				maior = A[1][0];
				armazem = j;
			}
		}
		cout << "A maior quantidade do produto 2 esta no armazem: " << armazem+1;
//		A
		for(int j = 0;j<4;j++){
			soma = 0;
			for(int i=0;i<3;i++){
				soma = soma + A[i][j];
			}
			cout << "A quantidade de produtos do armazem "<<j+1<< ": " << soma << endl;
		}
		cout << "A média dos produtos do armazenamento 3 é de: " << med/3;
}
