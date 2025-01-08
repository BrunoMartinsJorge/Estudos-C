#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define t 10
int V[t];
int dif = 0;
int NumMaior = 0;
int NumMenor = 0;
int i;
int par = 0;
int impar = 0;
float med = 0;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
//	Receber Variaveis
	for(i=0;i<t;i=i+1){
		cout << "Digite o "<< i+1 << "º número: ";
		cin >> V[i];
	}
//	Maior e Menor
		NumMaior = V[1];
		NumMenor = V[1];
	for(i=0;i<t;i=i+1){
		if(NumMaior<V[i]){
			NumMaior = V[i];
		}
		if(NumMenor>V[i]){
			NumMenor = V[i];	
		}
	}
	system("cls");
//	Média
	for(i=0;i<t;i=i+1){
		med = med + V[i];
	}
		med = med / 10;
	for(i=0;i<t;i=i+1){
		if(V[i] > med){
			cout << "O número " << V[i] << " é maior que a média dos valores do vetor!" << endl;
		}
	}
//	Diferença entre pares e impares
	for(i=0;i<t;i=i+1){
		if(V[i]%2 == 0){
			par = par + V[i];
		}
		else{
			impar = impar + V[i];
		}
	}
	dif = par - impar;
	cout << "A diferença entre os números pares e impares é de: " << dif << endl;
	cout << "O maior número é: " << NumMaior << ", e o menor número é: " << NumMenor << ", e a soma entre ambos é de: " << NumMenor+NumMaior << endl;
}
