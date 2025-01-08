#include <iostream>
using namespace std;

struct carro
{
    string modelo;
    string placa;
    int ano;
    float km;
    bool documento;
};
/*
Função 1 deve inserir novos veiculos no inicio da fila
Função 2 deve inserir novos veiculos no inicio da fila
Função 3 deve remover da posição K (posição indicada pelo usuario)
Função 4 deve imprir a lista por completo
Função 5 deve mostrar o veiculo com a maior kilometragem
Função 6 deve mostrar o modelo e tambem alterar as informações do veiculos
Funçõa 7 deve apenas finalizar o algoritomo
*/
int main()
{
    system("cls");
    system("color 90");
    int valor, i, K;
    carro veiculos[5];

    cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "  [1] - Inserir no inicio.\n  [2] - Inserir no final.\n  [3] - Remover da posicao K\n  [4] - imprimir a lista.\n  [5] - Maior kilometragem\n  [6] - Modelo.\n  [7] - Sair." << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cin >> valor;

    system("cls");
    while (valor != 7)
    {
        switch (valor)
        {
        case 1:
            for (i = 0; i < 5; i++)
            {
                char resp;
                cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout << "INSERIR NO inicio" << endl;
                cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout << "Digite o modelo do veiculo [" << i + 1 << "]: " << endl;
                cin >> veiculos[i].modelo;
                system("cls");
                cout << "Digite a placa do veiculo: " << endl;
                cin >> veiculos[i].placa;
                system("cls");
                cout << "Digite o ano do veiculo: " << endl;
                cin >> veiculos[i].ano;
                system("cls");
                cout << "Digite o KM: " << endl;
                cin >> veiculos[i].km;
                system("cls");
                cout << "O documento do veiculos esta OK [s/n]: " << endl;
                cin >> resp;
                if (resp == 's')
                {
                    veiculos[i].documento = true;
                }
                else
                {
                    veiculos[i].documento = false;
                }
            }
            break;
        case 2:
            for (i = 5 - 1; i >= 0; i--)
            {
                char resp;
                int qtd = 1;
                cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout << "INSERIR NO FINAL" << endl;
                cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
                cout << "Digite o modelo do veiculo [" << qtd << "]: " << endl;
                cin >> veiculos[i].modelo;
                system("cls");
                cout << "Digite a placa do veiculo: " << endl;
                cin >> veiculos[i].placa;
                system("cls");
                cout << "Digite o ano do veiculo: " << endl;
                cin >> veiculos[i].ano;
                system("cls");
                cout << "Digite o KM: " << endl;
                cin >> veiculos[i].km;
                system("cls");
                cout << "O documento do veiculos esta OK [s/n]: " << endl;
                cin >> resp;
                if (resp == 's')
                {
                    veiculos[i].documento = true;
                }
                else
                {
                    veiculos[i].documento = false;
                }
                qtd++;
            }
            break;
        case 3:
            cout << "Qual posicao deseja remover um veiculo: [1] [2] [3] [4] [5] " << endl;
            cin >> K;
            system("cls");
            if (K == 1)
            {
                veiculos[0].modelo = "";
                veiculos[0].placa = "";
                veiculos[0].ano = 0;
                veiculos[0].km = 0.0;
            }
            if (K == 2)
            {
                veiculos[1].modelo = "";
                veiculos[1].placa = "";
                veiculos[1].ano = 0;
                veiculos[1].km = 0.0;
            }
            if (K == 3)
            {
                veiculos[2].modelo = "";
                veiculos[2].placa = "";
                veiculos[2].ano = 0;
                veiculos[2].km = 0.0;
            }
            if (K == 4)
            {
                veiculos[3].modelo = "";
                veiculos[3].placa = "";
                veiculos[3].ano = 0;
                veiculos[3].km = 0.0;
            }
            if (K == 5)
            {
                veiculos[4].modelo = "";
                veiculos[4].placa = "";
                veiculos[4].ano = 0;
                veiculos[4].km = 0.0;
            }
            cout << "Posicao " << K << " removida com sucesso!" << endl;
            break;
        case 4:
            for (i = 0; i < 5; i++)
            {
                cout << "Lista de carro numero [" << i + 1 << "]: " << endl;
                cout << veiculos[i].modelo << endl;
                cout << veiculos[i].placa << endl;
                cout << veiculos[i].ano << endl;
                if (veiculos[i].documento){
                    cout << "Documento OK." << endl;
                }
                cout << endl;
            }
            break;
case 5:
{
    int maiorkm = veiculos[0].km;
    string nomemaiorkm;

    for (i = 0; i < 5; i++)
    {
        if (veiculos[i].km > maiorkm)
        {
            maiorkm = veiculos[i].km;
            nomemaiorkm = veiculos[i].modelo;
        }
    }
    cout << "O veiculo com maior kilometragem e " << nomemaiorkm << " com um total de KM de: " << maiorkm << endl;
    break;
}
case 6:
    int alterar;
    char remover;
    for (i = 0; i < 5; i++) {
        cout << "Lista de carro numero [" << i + 1 << "]: " << endl;
        cout << veiculos[i].modelo << endl;
        cout << veiculos[i].placa << endl;
        cout << veiculos[i].ano << endl;
        if (veiculos[i].documento == true) {
            cout << "Documento OK." << endl;
        }
        cout << endl;
    }
            cout << "Qual posição deseja remover: " << endl;
            cin >> alterar;
            system("cls");
            if (alterar == 1)
            {

                cout << "Digite o novo modelo do veiculo [1]: " << endl;
                cin >> veiculos[i].modelo;
                system("cls");
                cout << "Digite a nova placa do veiculo: " << endl;
                cin >> veiculos[i].placa;
                system("cls");
                cout << "Digite o ano do veiculo: " << endl;
                cin >> veiculos[i].ano;
                system("cls");
                cout << "Digite o KM: " << endl;
                cin >> veiculos[i].km;
                system("cls");
                cout << "O documento do veiculos esta OK [s/n]: " << endl;
                cin >> remover;
                if (remover == 's')
                {
                    veiculos[i].documento = true;
                }
                else
                {
                    veiculos[i].documento = false;
                }
            }
            if (alterar == 2)
            {
                cout << "Digite o novo modelo do veiculo [2]: " << endl;
                cin >> veiculos[i].modelo;
                system("cls");
                cout << "Digite a nova placa do veiculo: " << endl;
                cin >> veiculos[i].placa;
                system("cls");
                cout << "Digite o ano do veiculo: " << endl;
                cin >> veiculos[i].ano;
                system("cls");
                cout << "Digite o KM: " << endl;
                cin >> veiculos[i].km;
                system("cls");
                cout << "O documento do veiculos esta OK [s/n]: " << endl;
                cin >> remover;
                if (remover == 's')
                {
                    veiculos[i].documento = true;
                }
                else
                {
                    veiculos[i].documento = false;
                }
            }
            if (alterar == 3)
            {
                cout << "Digite o novo modelo do veiculo [3]: " << endl;
                cin >> veiculos[i].modelo;
                system("cls");
                cout << "Digite a nova placa do veiculo: " << endl;
                cin >> veiculos[i].placa;
                system("cls");
                cout << "Digite o ano do veiculo: " << endl;
                cin >> veiculos[i].ano;
                system("cls");
                cout << "Digite o KM: " << endl;
                cin >> veiculos[i].km;
                system("cls");
                cout << "O documento do veiculos esta OK [s/n]: " << endl;
                cin >> remover;
                if (remover == 's')
                {
                    veiculos[i].documento = true;
                }
                else
                {
                    veiculos[i].documento = false;
                }
            }
            if (alterar == 4)
            {
                cout << "Digite o novo modelo do veiculo [4]: " << endl;
                cin >> veiculos[i].modelo;
                system("cls");
                cout << "Digite a nova placa do veiculo: " << endl;
                cin >> veiculos[i].placa;
                system("cls");
                cout << "Digite o ano do veiculo: " << endl;
                cin >> veiculos[i].ano;
                system("cls");
                cout << "Digite o KM: " << endl;
                cin >> veiculos[i].km;
                system("cls");
                cout << "O documento do veiculos esta OK [s/n]: " << endl;
                cin >> remover;
                if (remover == 's')
                {
                    veiculos[i].documento = true;
                }
                else
                {
                    veiculos[i].documento = false;
                }
            }
            if (alterar == 5)
            {
                cout << "Digite o novo modelo do veiculo [5]: " << endl;
                cin >> veiculos[i].modelo;
                system("cls");
                cout << "Digite a nova placa do veiculo: " << endl;
                cin >> veiculos[i].placa;
                system("cls");
                cout << "Digite o ano do veiculo: " << endl;
                cin >> veiculos[i].ano;
                system("cls");
                cout << "Digite o KM: " << endl;
                cin >> veiculos[i].km;
                system("cls");
                cout << "O documento do veiculos esta OK [s/n]: " << endl;
                cin >> remover;
                if (remover == 's')
                {
                    veiculos[i].documento = true;
                }
                else
                {
                    veiculos[i].documento = false;
                }
            }
            break;
        }
        cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Deseja continuar:\n  [3] - Remover da posicao K\n  [4] - imprimir a lista.\n  [5] - Maior kilometragem\n  [6] - Modelo.\n  [7] - Sair." << endl;
        cout << "--------------------------------------------------------------------------------------------------------------------------------------" << endl;
        cin >> valor;
        system("cls");
    }
    return 0;
}
