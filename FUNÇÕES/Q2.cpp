#include <iostream>
#include <math.h>
#include <locale.h>

int fatorial(int);

using namespace std;
int main(){
	int n1 = 0;
	setlocale(LC_ALL,"");
	cout << "Digite um número: ";
	cin >> n1;
	cout << "O fatorial do número "<<n1<<" é igual á: "<<fatorial(n1);
}
int fatorial(int a) {
    int fat = 1; // Inicializa como 1
    for(int i = a; i >= 1; i--) {
        fat *= i; // Multiplica ao invés de somar
    }
    return fat;
}
