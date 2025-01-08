#include <iostream>
using namespace std;
int V[10];
#define T 5
int A[T], B[T], i, j;
void leitura();
void inverte();
void imprime();
int main(){
	leitura();
	inverte();
	imprime();
}

void leitura(){
	for(i=0;i<T;i=i+1){
		cout << "Digite A["<<i<<"]: ";
		cin >> A[i];
	}
}

void inverte(){
	for(i=0,j=4;i<T;i=i+1){
		B[j] = A[i];
		j=j-1;
	}
}

void imprime(){
	for(i=0;i<T;i=i+1){
		cout << B[i];
	}
}
