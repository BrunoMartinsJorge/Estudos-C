#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>
using namespace std;
int Z[t][t];
int i;
int j;
float med1;
float med2;
float cont1;
float cont2;
int main(){
	setlocale(LC_ALL,"");
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			cout << "Digite um n�mero para o elemento Z["<<i<<"]["<<j<<"]: ";
			cin >> Z[i][j];
		}
	}
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			if(i+j==t-1){
				med2 = med2 + Z[i][j];
				cont2 ++;
			}else if(i==j){
				med1 = med1 + Z[i][j];
				cont1 ++;
			}
		}
	}
	cout << "A m�dia dos elementos da diagonal principal s�o: " << med1/cont1 << endl;
	cout << "A m�dia dos elementos da diagonal secund�ria s�o: " << med2/cont2 << endl;
}
