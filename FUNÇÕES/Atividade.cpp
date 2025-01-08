#include <iostream>
#include <locale.h>
#define t 5

using namespace std;

struct produto {
    int cod;
    string nome;
    float valorCompra;
    bool estoque;
    double valorVenda;
};

produto val;
produto x[t];
int final, aux;
char conf;

void incerirInicio() {
    if (final < t - 1) {
        cout << "Digite o COD do produto: " << endl;
        cin >> val.cod;
        cout << "Digite o nome do produto: " << endl;
        cin.ignore();
        getline(cin, val.nome);
        cout << "Digite o valor de compra do produto: " << endl;
        cin >> val.valorCompra;
        cout << "Digite o valor de venda do produto: " << endl;
        cin >> val.valorVenda;
        cout << "Digite true (1) se houver este produto, e false (0) se não houver: " << endl;
        cin >> val.estoque;

        cout << "Deseja prosseguir? (S/N): ";
        cin >> conf;

        if (tolower(conf) == 's') {
            final++;
            x[final] = val;
            cout << "Produto inserido com sucesso no início!" << endl;
        } else {
            cout << "Não confirmou!" << endl;
        }
    } else {
        cout << "Overflow..." << endl;
    }
}

void incerirFim() {
    if (final < t - 1) {
        cout << "Digite o COD do produto: " << endl;
        cin >> val.cod;
        cout << "Digite o nome do produto: " << endl;
        cin.ignore();
        getline(cin, val.nome);
        cout << "Digite o valor de compra do produto: " << endl;
        cin >> val.valorCompra;
        cout << "Digite o valor de venda do produto: " << endl;
        cin >> val.valorVenda;
        cout << "Digite true (1) se houver este produto, e false (0) se não houver: " << endl;
        cin >> val.estoque;

        cout << "Deseja prosseguir? (S/N): ";
        cin >> conf;

        if (tolower(conf) == 's') {
            final++;
            aux = final;
            while (aux != 0) {
                x[aux] = x[aux - 1];
                aux--;
            }
            x[0] = val;
            cout << "Produto inserido com sucesso no fim!" << endl;
        } else {
            cout << "Não confirmou!" << endl;
        }
    } else {
        cout << "Overflow..." << endl;
    }
}

void deletarEmK(){
	int k;
    if (final < t - 1) {
        cout << "Digite um local para ser excluido: " << endl;
        cin >> k;
        if(k>=0 & k<= final){
        cout << "Deseja prosseguir? (S/N): ";
        cin >> conf;
        if (tolower(conf) == 's') {
            	final++;
            	aux = final;
            	while(aux!=k){
            		x[aux] = x[aux-1];
            		aux--;
				}
				x[aux] = val;
        	}else {
    	        cout << "Não confirmou!" << endl;
	        }
		} else{
	      	cout << k<<" Não existe na lista";
		}
    } else {
        cout << "Overflow..." << endl;
    }
}

void verLista(){
	if(final > -1){
		aux = 0;
	 while(aux<=final){
			cout << "Nome: "<<x[aux].nome<<endl;
			cout << "ID: "<<x[aux].cod<<endl;
			cout << "Existe: "<<x[aux].estoque<<endl;
			cout << "Valor de venda: "<<x[aux].valorCompra<<endl;
			cout << "Valor de compra: "<<x[aux].valorVenda<<endl;
		}
	}else{
		cout << "Lista vazia!"<<endl;
	}
}

void menu() {
    int resposta = -1;
    while (resposta != 0) {
        cout << "Escolha uma opção: " << endl;
        cout << "1* Inserir No Início" << endl;
        cout << "2* Inserir No Fim" << endl;
        cout << "3* Remover da posição K" << endl;
        cout << "4* Ver Lista" << endl;
        cout << "5* Função" << endl;
        cout << "6* Função" << endl;
        cout << "0* Sair" << endl;
        cin >> resposta;

        switch (resposta) {
            case 0:
                cout << "Saindo..." << endl;
                break;
            case 1:
                incerirInicio();
                break;
            case 2:
                incerirFim();
                break;
            case 3:
                // Remover da posição K
                break;
            case 4:
            	verLista();
                // função
                break;
            case 5:
                // função
            	break;
            case 6:
                // função
                break;
            default:
                cout << "Opção inválida!" << endl;
                break;
        }
    }
}

int main() {
    setlocale(LC_ALL, "");
    final = -1;
    menu();
}

