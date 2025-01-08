#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
float n[10];
int i;
int soma;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i = 0; i<10; i = i +1){
		cout << "Digite o "<< i+1 << "º número: ";
		cin >> n[i];
	}
	for(i=0;i<10;i = i +1){
		cout << "Raiz do número: " << n[i] << " é: " << sqrt(n[i]) << endl;
		cout << "O cubo do número: " << n[i] << " é:" << pow(n[i], 3) << endl;
	}
}
