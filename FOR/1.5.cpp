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
			if(n[i]<0){
				n[i] = n[i] * -1;
		}
		cout << n[i] << endl;	
	}
}
