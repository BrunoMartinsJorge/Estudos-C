#include <iostream>
#include <locale.h>
#include <conio.h>
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
		system("cls");
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
	system("cls");
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
	system("cls");
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
				cout << "Produto deletado na posição "<<k<<"º!"<<endl;
				getch();
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
	system("cls");
	if(final > -1){
		aux = 0;
		cout << "|----------------------------------------------|"<<endl;
	 while(aux<=final){
			cout << "Nome: "<<x[aux].nome<<endl;
			cout << "ID: "<<x[aux].cod<<endl;
			cout << "Existe: "<<x[aux].estoque<<endl;
			cout << "Valor de venda: "<<x[aux].valorCompra<<endl;
			cout << "Valor de compra: "<<x[aux].valorVenda<<endl;
			cout << "|----------------------------------------------|"<<endl;
			aux++;
		}
		getch();
	}else{
		cout << "Lista vazia!"<<endl;
		getch();
	}
}

void alterarPorNome(){
	system("cls");
	if(final > -1){
		string produto = "";
		cout << "Digite o nome de um produto: "<<endl;
		cin >> produto;
		aux = 0;
		cout << "Deseja prosseguir? (S/N): ";
        cin >> conf;
        double novoPreco = 0;
        if(conf == 's'){
        while(aux<=final){
	 	if(x[aux].nome == produto){
	 		cout << "Digite um novo valor: "<<endl;
	 		cin >> novoPreco;
	 		x[aux].valorVenda = novoPreco;
	 		cout << "Valor alterado!"<<endl;
		 }
		aux++;
		}
		if(novoPreco == 0){
			cout << "Nenhum produto encontrado com o nome "<<produto<<endl;
		}
		getch();	
		}else{
			cout << "Não confirmou!" << endl;
		}
	}else{
		cout << "Lista vazia!"<<endl;
	}
}

void buscarProdutoDoMaiorPreco() {
    system("cls");
    if (final > -1) {
        produto produtoMaisCaro = x[0];
        int aux = 0;
        char conf;

        while (aux <= final) {
            if (x[aux].valorVenda > produtoMaisCaro.valorVenda) {
                produtoMaisCaro = x[aux];
            }
            aux++;
        }

		cout << "Produto mais caro: " << produtoMaisCaro.nome << endl;
        cout << "Deseja prosseguir? (S/N): ";
        cin >> conf;
        if (conf == 'S' || conf == 's') {

            for (int i = 0; i <= final; i++) {
                if (x[i].nome == produtoMaisCaro.nome) {
                    for (int j = i; j < final; j++) {
                        x[j] = x[j + 1];
                    }
                    final--;
                    cout << "Produto deletado" << endl;
                    break;
                }
            }

            getch();
        } else {
            cout << "Não confirmou!" << endl;
            getch();
        }
    } else {
        cout << "Lista vazia!" << endl;
    }
}


void menu() {
    int resposta = -1;
    while (resposta != 0) {
    	system("cls");
        cout << "Escolha uma opção: " << endl;
        cout << "1* Inserir No Início" << endl;
        cout << "2* Inserir No Fim" << endl;
        cout << "3* Remover da posição K" << endl;
        cout << "4* Ver Lista" << endl;
        cout << "5* Alterar Preco pelo nome" << endl;
        cout << "6* Deletar Produto mais caro" << endl;
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
            	deletarEmK();
                break;
            case 4:
            	verLista();
                break;
            case 5:
            	alterarPorNome();
            	break;
            case 6:
            	buscarProdutoDoMaiorPreco();
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

