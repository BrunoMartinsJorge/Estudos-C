#include <iostream>
#include <math.h>
#include <locale.h>

int n1,n2;
int soma(int, int);

using namespace std;

int main(){
	setlocale(LC_ALL,"");
	cout << "Digite o primeiro n�mero: ";
	cin >> n1;
	cout << "Digite o segundo n�mero: ";
	cin >> n2;
	cout << "A soma entre "<<n1<<" e "<<n2<<" � igual �: "<<soma(n1,n2);
}

int soma(int a, int b){
	return a+b;
}
