#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define t 20
float A[t];
int cont = 0;
int i;
float Ainverte[t];
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<t;i=i+1){
		cout << "Digite o " << i+1 << "º número: ";
		cin >> A[i];
	}
	for(i=20;i>20;i=i-1){
//		cout << A[i] << endl;
		Ainverte[i] = Ainverte[i] + A[i];
	}
}
