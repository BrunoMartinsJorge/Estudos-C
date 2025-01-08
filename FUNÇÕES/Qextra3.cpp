#include <iostream>
#include <math.h>
#include <locale.h>
#define t 3
using namespace std;
int mult(int b, int c);

int a, i, j, m[t][t] = {8, 3, -2,
						4, 5, 8,
						2, 6, 10};
int main(){
	for(i=0;i<t;i++){
		for(j=0;j<t;j++){
			a = mult(m[i][j], i);
			cout << "| " << a;
		}
		cout << "|" << endl;
	}
}

int mult(int b, int c){
	if(b%2 == 0){
		b=b*c;
	}
	return b;
}
