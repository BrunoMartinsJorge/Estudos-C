#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int x;
int i;
int q;
int s;
int qtd;
int n[30];
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<10;i=i+1){
		cout << "Digite o " << i+1 << "º número: ";
		cin >> n[i];
	}
	for(i=0;i<10;i=i+1){
		if(n[i]%5 == 0){
			qtd = qtd + 1;
			cout << "Na posição " << i+1 << ", existe um impar"<< endl;
		}
	}
	cout << "Qtd de > 5: "<< qtd << " na posição: " << i << endl;
	
}
