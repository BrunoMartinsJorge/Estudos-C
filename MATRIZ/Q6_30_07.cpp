#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
using namespace std;
#define t 5
int Z[t][t];
int i;
int j;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			cout << "Digite um número para Z["<<i<<"]["<<j<<"]: ";
			cin >> Z[i][j];
			if(i==j){
				cout << "Elemento da diagonal principal!" << endl;
			}else if(i+j==t-1){
				cout << "Elemento da diagonal secundaria!" << endl;
			}else if(i<j){
				cout << "Elemento acima da diagonal principal!" << endl;
			}
		}
	}
}
