#include <iostream>
#include <locale.h>
#include <conio.h>
#define t 10
int final = 0;
using namespace std;
struct tipo{
	int n;
};
tipo a[t] = {1,2,3,4,5,6,7,8,9,10};
int main() {
    setlocale(LC_ALL, "");
    final = 9;
    if(final > -1){
    	int qtdImpares = 0;
    	int cont = 0;
    	int media = 0;
    	for(int i=0;i<=final;i++){
    		if(a[i].n%2==0){
    			qtdImpares++;
			}
			
			if(a[i].n%3==0){
				a[i].n *= 2;
				cout << "Valor divisivel por 3 encontrado! Seu novo valor é: "<<a[i].n<<endl;
			}
			media+=a[i].n;
		}
		cout << "A média entre os valores é: "<<media/cont<<endl;
	}else{
		cout << "Lista vazia!"<<endl;
	}
}

