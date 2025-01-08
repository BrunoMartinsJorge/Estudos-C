#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
#define t 3
using namespace std;
int A[t][t];
int B[t][t];
int main(){
	setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout << "Digite um número para o elemento A["<<i<<"]["<<j<<"]: ";
			cin >> A[i][j];
		}
	}
	
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if(A[i][j]%2==0){
				B[i][j]=0;
				if(A[i][j]%3 == 0){
					B[i][j]=2;
				}
			}
			else if(A[i][j]%3==0){
				B[i][j]=1;
			}
			else{
				B[i][j]=-1;
			}
		}
	}
	
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout << "|"<<B[i][j]<<"|";
		}
		cout << endl;
	}
}
