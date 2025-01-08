#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int x;
int i;
float n[10];
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	cout << "Digite um número: ";
	cin >> x;
	for(i = 0;i<10;i = i + 1){
		cout << "Digite o "<< i+1 << "º número: ";
		cin >> n[i];
	}
	for(i=0;i<10;i=i+1){
		n[i] = n[i] * x;
	}
	for(i=0;i<10;i=i+1){
		cout << n[i] << " ";
	}
}
