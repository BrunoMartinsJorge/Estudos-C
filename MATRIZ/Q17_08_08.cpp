#include <iostream>
#include <math.h>
#include <locale.h>
#define t 3
using namespace std;
int A[t][t];
int linha1;
int linha2;
int subtracao = 0;
int main(){
		setlocale(LC_ALL,"");
	linha1=0;
	linha2=0;
		for(int i=0;i<t;i++){
			for(int j=0;j<t;j++){
				cout << "Digite o elemento["<<i<<"]["<<j<<"]: ";
				cin >> A[i][j];
			}
		}
	for(int j=0;j<t;j++){
		linha1=A[0][j];
		linha2=A[2][j];
		cout << "A subtração entre os elementos: "<<linha1<<" e "<<linha2<<" é = "<<linha1-linha2<<endl;
	}
}
