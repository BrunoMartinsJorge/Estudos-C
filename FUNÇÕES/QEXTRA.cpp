#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int N = 0;
int A = 0;

void leitura(){
	cout << "Digite um valor: ";
	cin >> N;
}

int dobro(int v){
	return v*2;
}

int triplo(int v){
	return v*3;
}

int vezesEleMesmo(int v){
	return v*v;
}

int multiplicacao(int n1, int n2){
	return n1*n2;
}

int main(){
	setlocale(LC_ALL,"");
	leitura();
	cout << "O valor em dobro � "<<dobro(N) <<endl;
	cout << "O valor vezes ele mesmo � "<<vezesEleMesmo(N) <<endl;
	cout << "O valor no triplo � "<<triplo(N) <<endl;
	cout << "Digite outro n�mero: ";
	cin >> A;
	cout << "A multiplica��o entre "<<N<<" vezes "<<A<<" � igual h� "<<multiplicacao(N, A) <<endl;
}
