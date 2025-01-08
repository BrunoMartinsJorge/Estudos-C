#include <iostream>
#include <math.h>
#include <locale.h>

int n1,n2;
int soma(int, int);

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	cout << "Digite o primeiro número: ";
	cin >> n1;
	cout << "Digite o segundo número: ";
	cin >> n2;
	cout << "A soma entre "<<n1<<" e "<<n2<<" é igual á: "<<soma(n1,n2);
}

int soma(int a, int b){
	return a+b;
}
