#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
int A[4][4];
int i;
int j;
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout << "Digite o elemento A[" << i << "][" << j << "]: ";
			cin >> A[i][j];
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(A[i][j]%2 == 0){
				A[i][j] = 0;
			}else{
				A[i][j] = 1;
			}
		}
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			cout << "Elemento [" << i << "] [" << j << "] = " << A[i][j] <<endl;
		}
	}
	
}
