#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int A[3][3], v[3];
int main(){
		setlocale(LC_ALL,"");
		for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Digite o número: ["<<i<<"]["<<j<<"]: ";
				cin >> A[i][j];
					if(i==j){
	 					v[i] = A[i][j];
	 			}
			}
		}
	for(int i=0;i<3;i++){
		cout << "Digonal principal: " <<v[i] << endl;
	}
}
