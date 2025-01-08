#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define t 3
#define b 4
using namespace std;
int Z[t][b];
int i;
int j;
int cont1;
int cont2;
int cont3;
int cont4;
int contMed;
float med;
float soma1;
float soma2;
float soma3;
int main(){
	setlocale(LC_ALL,"");
	med = 0;
	for(i=0;i<t;i++){
		for(j=0;j<b;j++){
			cout << "Digite um número para o Armazenamento["<<i<<" "<<j<<"]:";
			cin >> Z[i][j];
		}
	}
	for(i=0;i<t;i++){
		for(j=0;j<b;j++){
			if(j==0){
				cont1 = cont1 + Z[i][j];
			}else if(j==1){
				cont2 = cont2 + Z[i][j];
			}else if(j==2){
				cont3 = cont3 + Z[i][j];
				contMed++;
				med = med + Z[i][j];
			}else if(j==3){
				cont4 = cont4 + Z[i][j];
			}
		}
	}
	cout << "Quantidade Armazenamento 1: " << cont1 << endl;	
	cout << "Quantidade Armazenamento 2: " << cont2 << endl;
	cout << "Quantidade Armazenamento 3: " << cont3 << endl;
	cout << "Quantidade Armazenamento 4: " << cont4 << endl;
	cout << "Média dos itens armazenados no Armazenamento 3: " << med/contMed;
}
