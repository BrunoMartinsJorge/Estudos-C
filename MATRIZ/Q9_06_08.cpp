#include <iostream>
#include <math.h>
#include <locale.h>
#define t 5
using namespace std;
int A[t][t];
int main(){
		setlocale(LC_ALL,"");
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			cout << "Digite o n�mero da posi��o: ["<<i+1<<"]["<<j+1<<"]: ";
				cin >> A[i][j];
			}
		}
	for(int i=0;i<t;i++){
		for(int j=0;j<t;j++){
			if((A[i][j]>=50 & A[i][j] <=95) & (sqrt(A[i][j])<9|sqrt(A[i][j])>10)){
				cout << "Local indicado ["<<i+1<<"]["<<j+1<<"]: " << " pois sua prioriadade organica � de: " <<sqrt(A[i][j])<<endl;
			}
		}
	}
}
