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
		cout << "Digite o "<< i+1 << "� n�mero: ";
		cin >> n[i];
	}
	for(i=0;i<10;i = i +1){
		cout << "Raiz do n�mero: " << n[i] << " �: " << sqrt(n[i]) << endl;
		cout << "O cubo do n�mero: " << n[i] << " �:" << pow(n[i], 3) << endl;
	}
}
