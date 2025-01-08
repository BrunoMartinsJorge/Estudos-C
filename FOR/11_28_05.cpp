#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
float B[30];
float soma = 0;
int i;
int j;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<30;i=i+1){
		cout << "Digite o " << i+1 << "º número: ";
		cin >> B[i];
	}
	for(i=0,j=29;i<15;i=i+1, j=j-1){
		soma = soma + pow(B[i] - B[j],3);
	}
	cout << "Soma: " << soma;
}
