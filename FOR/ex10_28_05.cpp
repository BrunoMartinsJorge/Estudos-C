#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
float V[5];
float maior;
float menor;
int i;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<5;i=i+1){
		cout << "Digite o "<< i+1<< "º número do vetor: ";
		cin >> V[i];
	}
	maior = V[0];
	menor = V[0];
	for(i=0;i<5;i=i+1){
		if(V[i]>maior){
			maior = V[i];
		}
		if(V[i]<menor){
			menor = V[i];
		}
	}
	system("cls");
	cout << "O maior é: " << maior << endl;
	cout << "O menor é: " << menor << endl;
}
