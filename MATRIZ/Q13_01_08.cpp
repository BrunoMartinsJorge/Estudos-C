#include <iostream>
#include <math.h>
#include <locale.h>
using namespace std;
int A[2][3], contPar = 0;
int main(){
		setlocale(LC_ALL,"");
		for(int i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout << "Digite o número: ["<<i<<"]["<<j<<"]: ";
				cin >> A[i][j];
					if(A[i][j]%2==0){
	 					contPar = contPar + 1;
	 			}
			}
		}
	if(contPar==0){
		cout << "Não encontrei elemento PAR na matriz";
	}else{
		cout << "Foram encontrados "<<contPar<<" na matriz!";
	}
}
