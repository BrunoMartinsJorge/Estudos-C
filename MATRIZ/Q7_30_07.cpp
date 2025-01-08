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
			cout << "Digite um número para o elemento Z["<<i<<"]["<<j<<"]: ";
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
	cout << "A média dos elementos da diagonal principal são: " << med1/cont1 << endl;
	cout << "A média dos elementos da diagonal secundária são: " << med2/cont2 << endl;
}
