#include <iostream>
#include <conio.h>
#include <math.h>
#include <locale.h>

int A[4][3];
int V1[4];
int V2[3];
int media = 0;
int menor;
int maior;

using namespace std;

int main(){
    setlocale(LC_ALL,"");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            cout << "Digite o " << j + 1 << "º número da " << i + 1 << "º fileira: ";
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < 4; i++){
        maior = A[i][0];
        for(int j = 0; j < 3; j++){
            if(A[i][j] > maior){
                maior = A[i][j];
            }
        }
        V1[i] = maior;
        media += maior;
    }

    for(int j = 0; j < 3; j++){
        menor = A[0][j];
        for(int i = 0; i < 4; i++){
            if(A[i][j] < menor){
                menor = A[i][j];
            }
        }
        V2[j] = menor;
    }

    for(int i = 0; i < 4; i++){
        cout << endl;
        for(int j = 0; j < 3; j++){
            cout << "[" << A[i][j] << "]";
        }
    }
    cout << endl;

    cout << "Parte A----------------------------------" << endl;
    cout << "A média entre os maiores números é: " << media / 4 << endl;
    for(int i = 0; i < 4; i++){
        cout << "Maior elemento da linha " << i + 1 << ": " << V1[i] << endl;
    }

    cout << "Parte B----------------------------------" << endl;
    menor = V2[0];
    for(int i = 0; i < 3; i++){
        cout << "Menor elemento da coluna " << i + 1 << ": " << V2[i] << endl;
        if(V2[i] < menor){
            menor = V2[i];
        }
    }

    cout << "O menor valor entre os menores elementos das colunas é: " << menor << endl;
}

