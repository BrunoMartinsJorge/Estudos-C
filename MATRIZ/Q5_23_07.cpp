#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int A[3][3];
int B[3][3];
int R[3][3];
int i;
int j;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << "Digite um número: ";
			cin >> A[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << "Digite um número: ";
			cin >> B[i][j];
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			R[i][j] = pow(A[i][j], 2)+pow(B[i][j],2);
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout << " " << R[i][j] << endl;
		}
	}
	
}
